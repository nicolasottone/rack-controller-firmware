//Variable que contendra el body del https PUT
extern String body;

//Pone en default el objeto json y lo devuelve ----
//Valores default [booleans = false, meassures = 25, max_temp = 45 & max_hum = 80]
FirebaseJson createTemplate(FirebaseJson &json);

//Devuelve el estado booleano, devuelve cero si no encontro nada e imprime error.
bool getState(String key, FirebaseJson &json);

//Devuelve el valor float, devuelve cero si no se encontro nada e imprime error.
float getValue(String key, FirebaseJson &json);

//actualiza el valor flotante, verifica antes si existe la ruta. Devuelve true or false
bool upValue(String key, float value, FirebaseJson &json);

//Devuelve string con el json cargado, true si fue exitoso
bool uploadDataToString(void);

//Descarga los datos de valores maximos y el estado del rele
void downloadData(FirebaseJson &json);