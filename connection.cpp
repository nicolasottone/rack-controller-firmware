#include "driver/gpio.h"
#include <SPI.h>
#include <EthernetENC.h>
#include <SSLClient.h>
#include "trust_anchors.h"
#include <FirebaseJson.h>

// MAC address
byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };

//Endpoint de la API y del servidor:
char server[] = "rack-controller-arg-default-rtdb.firebaseio.com";
char server_host[] = "rack-controller-arg-default-rtdb.firebaseio.com";

// Seteo una ip estatica por si el DHCP falla
IPAddress ip(192, 168, 0, 177);
IPAddress myDns(8, 8, 8, 8);

// Inicializo cliente Ethernet
EthernetClient base_client;

// Inicializo cliente SSL, pin de entropia: GPIO_34
SSLClient client(base_client, TAs, (size_t)TAs_NUM, GPIO_NUM_34);

FirebaseJson data_in;

void ethernetSetup(){
  Ethernet.init(GPIO_NUM_5);
}

bool hardwareCheck() {
  // Comprueba si hay hardware Ethernet presente
  if (Ethernet.hardwareStatus() == EthernetNoHardware) {
    Serial.println("No se encontró el modulo Ethernet.");
    while (true) {
      delay(1);  // no hacer nada, no tiene sentido ejecutar sin hardware Ethernet
    }
  }
  return true;
}

bool wireIsConnected() {
  if (Ethernet.linkStatus() == LinkOFF) {
    Serial.println("El cable Ethernet no está conectado. Conectalo por favor");
    return 0;
  }
  return 1;
}

bool dhcpInit() {
  Serial.println("Initialize Ethernet with DHCP:");
  for (int i = 0; i < 3; i++) {
    if (Ethernet.begin(mac) != 0) {
      Serial.print("  IP asignada por DHCP ");
      Serial.println(Ethernet.localIP());
      Serial.println("connecting to " + String(server) + " ...");
      // Espera antes de intentar de nuevo
      delay(2000);
      return 1;
    }
  }

  // DHCP ha fallado 3 veces => intenta con IP estática
  Serial.println("Error al configurar Ethernet usando DHCP");
  Ethernet.begin(mac, ip, myDns);
  return 0;
}

void connectionMantain(){
  Ethernet.maintain();
}

void handleServerResponse() {
  data_in.clear();
  if (data_in.readFrom(client)) {
  } else {
    Serial.println("Error al leer JSON desde el servidor");
  }
}

bool httpsGET() {
  //servidor y el puerto, 443 es el puerto estándar para HTTPS
  if (client.connect(server, 443)) {
    client.println("GET /.json HTTP/1.1");
    client.println("User-Agent: SSLClientOverEthernet");
    client.println("Host: " + String(server_host));
    client.println("Connection: close");
    client.println();
    return true;
  } else {
    Serial.println("Falló la conexión");
    return false;
  }
}

bool httpsPUT(String payload) {
  // servidor y el puerto, 443 es el puerto estándar para HTTPS
  if (client.connect(server, 443)) {
    client.println("PUT /.json HTTP/1.1");
    client.println("User-Agent: SSLClientOverEthernet");
    client.println("Host: " + String(server_host));
    client.println("Content-Type: application/json");
    client.println("Content-Length: " + String(payload.length()));
    client.println("Connection: close");
    client.println();
    client.println(payload);
    return true;
  } else {
    Serial.println("Falló la conexión");
    return false;
  }
}

void clientStop(){
  client.stop();
  return;
}

int isClientAvailable(){
  return client.available(); 
}

bool isClientConnected(){
  return client.connected();
}

/*
void handleServerResponse() {
  //Para ver la respuesta completa por consola
  
  int len = client.available();
  byte buffer[512];
  if (len > 512) len = 512;
  client.read(buffer, len);
  Serial.write(buffer, len);
  
  data_in.clear();
  if (data_in.readFrom(client)) {
  } else {
    Serial.println("Error al leer JSON desde el servidor");
  }
}
*/