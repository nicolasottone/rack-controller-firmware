#ifndef _MIS_CERTIFICADOS_H_
#define _MIS_CERTIFICADOS_H_

#ifdef __cplusplus
extern "C"
{
#endif

/* This file is auto-generated by the pycert_bearssl tool.  Do not change it manually.
 * Certificates are BearSSL br_x509_trust_anchor format.  Included certs:
 *
 * Index:    0
 * Label:    GTS Root R1
 * Subject:  CN=GTS Root R1,O=Google Trust Services LLC,C=US
 * Type:     Certificate Authority
 * Expired Date: 2037
 * Este certificado es el SSL certificate raiz del dominio www.gstatic.com, el cual se usa para varios servicios de google
 */

#define TAs_NUM 1

static const unsigned char TA_DN0[] = {
    0x30, 0x47, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13,
    0x02, 0x55, 0x53, 0x31, 0x22, 0x30, 0x20, 0x06, 0x03, 0x55, 0x04, 0x0a,
    0x13, 0x19, 0x47, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x20, 0x54, 0x72, 0x75,
    0x73, 0x74, 0x20, 0x53, 0x65, 0x72, 0x76, 0x69, 0x63, 0x65, 0x73, 0x20,
    0x4c, 0x4c, 0x43, 0x31, 0x14, 0x30, 0x12, 0x06, 0x03, 0x55, 0x04, 0x03,
    0x13, 0x0b, 0x47, 0x54, 0x53, 0x20, 0x52, 0x6f, 0x6f, 0x74, 0x20, 0x52,
    0x31,
};

static const unsigned char TA_RSA_N0[] = {
    0xb6, 0x11, 0x02, 0x8b, 0x1e, 0xe3, 0xa1, 0x77, 0x9b, 0x3b, 0xdc, 0xbf,
    0x94, 0x3e, 0xb7, 0x95, 0xa7, 0x40, 0x3c, 0xa1, 0xfd, 0x82, 0xf9, 0x7d,
    0x32, 0x06, 0x82, 0x71, 0xf6, 0xf6, 0x8c, 0x7f, 0xfb, 0xe8, 0xdb, 0xbc,
    0x6a, 0x2e, 0x97, 0x97, 0xa3, 0x8c, 0x4b, 0xf9, 0x2b, 0xf6, 0xb1, 0xf9,
    0xce, 0x84, 0x1d, 0xb1, 0xf9, 0xc5, 0x97, 0xde, 0xef, 0xb9, 0xf2, 0xa3,
    0xe9, 0xbc, 0x12, 0x89, 0x5e, 0xa7, 0xaa, 0x52, 0xab, 0xf8, 0x23, 0x27,
    0xcb, 0xa4, 0xb1, 0x9c, 0x63, 0xdb, 0xd7, 0x99, 0x7e, 0xf0, 0x0a, 0x5e,
    0xeb, 0x68, 0xa6, 0xf4, 0xc6, 0x5a, 0x47, 0x0d, 0x4d, 0x10, 0x33, 0xe3,
    0x4e, 0xb1, 0x13, 0xa3, 0xc8, 0x18, 0x6c, 0x4b, 0xec, 0xfc, 0x09, 0x90,
    0xdf, 0x9d, 0x64, 0x29, 0x25, 0x23, 0x07, 0xa1, 0xb4, 0xd2, 0x3d, 0x2e,
    0x60, 0xe0, 0xcf, 0xd2, 0x09, 0x87, 0xbb, 0xcd, 0x48, 0xf0, 0x4d, 0xc2,
    0xc2, 0x7a, 0x88, 0x8a, 0xbb, 0xba, 0xcf, 0x59, 0x19, 0xd6, 0xaf, 0x8f,
    0xb0, 0x07, 0xb0, 0x9e, 0x31, 0xf1, 0x82, 0xc1, 0xc0, 0xdf, 0x2e, 0xa6,
    0x6d, 0x6c, 0x19, 0x0e, 0xb5, 0xd8, 0x7e, 0x26, 0x1a, 0x45, 0x03, 0x3d,
    0xb0, 0x79, 0xa4, 0x94, 0x28, 0xad, 0x0f, 0x7f, 0x26, 0xe5, 0xa8, 0x08,
    0xfe, 0x96, 0xe8, 0x3c, 0x68, 0x94, 0x53, 0xee, 0x83, 0x3a, 0x88, 0x2b,
    0x15, 0x96, 0x09, 0xb2, 0xe0, 0x7a, 0x8c, 0x2e, 0x75, 0xd6, 0x9c, 0xeb,
    0xa7, 0x56, 0x64, 0x8f, 0x96, 0x4f, 0x68, 0xae, 0x3d, 0x97, 0xc2, 0x84,
    0x8f, 0xc0, 0xbc, 0x40, 0xc0, 0x0b, 0x5c, 0xbd, 0xf6, 0x87, 0xb3, 0x35,
    0x6c, 0xac, 0x18, 0x50, 0x7f, 0x84, 0xe0, 0x4c, 0xcd, 0x92, 0xd3, 0x20,
    0xe9, 0x33, 0xbc, 0x52, 0x99, 0xaf, 0x32, 0xb5, 0x29, 0xb3, 0x25, 0x2a,
    0xb4, 0x48, 0xf9, 0x72, 0xe1, 0xca, 0x64, 0xf7, 0xe6, 0x82, 0x10, 0x8d,
    0xe8, 0x9d, 0xc2, 0x8a, 0x88, 0xfa, 0x38, 0x66, 0x8a, 0xfc, 0x63, 0xf9,
    0x01, 0xf9, 0x78, 0xfd, 0x7b, 0x5c, 0x77, 0xfa, 0x76, 0x87, 0xfa, 0xec,
    0xdf, 0xb1, 0x0e, 0x79, 0x95, 0x57, 0xb4, 0xbd, 0x26, 0xef, 0xd6, 0x01,
    0xd1, 0xeb, 0x16, 0x0a, 0xbb, 0x8e, 0x0b, 0xb5, 0xc5, 0xc5, 0x8a, 0x55,
    0xab, 0xd3, 0xac, 0xea, 0x91, 0x4b, 0x29, 0xcc, 0x19, 0xa4, 0x32, 0x25,
    0x4e, 0x2a, 0xf1, 0x65, 0x44, 0xd0, 0x02, 0xce, 0xaa, 0xce, 0x49, 0xb4,
    0xea, 0x9f, 0x7c, 0x83, 0xb0, 0x40, 0x7b, 0xe7, 0x43, 0xab, 0xa7, 0x6c,
    0xa3, 0x8f, 0x7d, 0x89, 0x81, 0xfa, 0x4c, 0xa5, 0xff, 0xd5, 0x8e, 0xc3,
    0xce, 0x4b, 0xe0, 0xb5, 0xd8, 0xb3, 0x8e, 0x45, 0xcf, 0x76, 0xc0, 0xed,
    0x40, 0x2b, 0xfd, 0x53, 0x0f, 0xb0, 0xa7, 0xd5, 0x3b, 0x0d, 0xb1, 0x8a,
    0xa2, 0x03, 0xde, 0x31, 0xad, 0xcc, 0x77, 0xea, 0x6f, 0x7b, 0x3e, 0xd6,
    0xdf, 0x91, 0x22, 0x12, 0xe6, 0xbe, 0xfa, 0xd8, 0x32, 0xfc, 0x10, 0x63,
    0x14, 0x51, 0x72, 0xde, 0x5d, 0xd6, 0x16, 0x93, 0xbd, 0x29, 0x68, 0x33,
    0xef, 0x3a, 0x66, 0xec, 0x07, 0x8a, 0x26, 0xdf, 0x13, 0xd7, 0x57, 0x65,
    0x78, 0x27, 0xde, 0x5e, 0x49, 0x14, 0x00, 0xa2, 0x00, 0x7f, 0x9a, 0xa8,
    0x21, 0xb6, 0xa9, 0xb1, 0x95, 0xb0, 0xa5, 0xb9, 0x0d, 0x16, 0x11, 0xda,
    0xc7, 0x6c, 0x48, 0x3c, 0x40, 0xe0, 0x7e, 0x0d, 0x5a, 0xcd, 0x56, 0x3c,
    0xd1, 0x97, 0x05, 0xb9, 0xcb, 0x4b, 0xed, 0x39, 0x4b, 0x9c, 0xc4, 0x3f,
    0xd2, 0x55, 0x13, 0x6e, 0x24, 0xb0, 0xd6, 0x71, 0xfa, 0xf4, 0xc1, 0xba,
    0xcc, 0xed, 0x1b, 0xf5, 0xfe, 0x81, 0x41, 0xd8, 0x00, 0x98, 0x3d, 0x3a,
    0xc8, 0xae, 0x7a, 0x98, 0x37, 0x18, 0x05, 0x95,
};

static const unsigned char TA_RSA_E0[] = {
    0x01, 0x00, 0x01,
};

static const br_x509_trust_anchor TAs[] = {
    {
        { (unsigned char *)TA_DN0, sizeof TA_DN0 },
        BR_X509_TA_CA,
        {
            BR_KEYTYPE_RSA,
            { .rsa = {
                (unsigned char *)TA_RSA_N0, sizeof TA_RSA_N0,
                (unsigned char *)TA_RSA_E0, sizeof TA_RSA_E0,
            } }
        }
    },
};

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* ifndef _MIS_CERTIFICADOS_H_ */