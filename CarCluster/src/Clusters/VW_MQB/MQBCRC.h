// ####################################################################################################################
// 
// Code part of CarCluster project by Andrej Rolih. See .ino file more details
// 
// ####################################################################################################################

#ifndef MQB_CRC
#define MQB_CRC

unsigned char P_L_CC_CRC_LUT_APV[256] = { 0, 47, 94, 113, 188, 147, 226, 205, 87, 120, 9, 38, 235, 196, 181, 154, 174, 129, 240, 223, 18, 61, 76, 99, 249, 214, 167, 136, 69, 106,
                                          27, 52, 115, 92, 45, 2, 207, 224, 145, 190, 36, 11, 122, 85, 152, 183, 198, 233, 221, 242, 131, 172, 97, 78, 63, 16, 138, 165, 212, 251, 54, 25, 104, 71, 230, 201, 184, 151, 90, 117,
                                          4, 43, 177, 158, 239, 192, 13, 34, 83, 124, 72, 103, 22, 57, 244, 219, 170, 133, 31, 48, 65, 110, 163, 140, 253, 210, 149, 186, 203, 228, 41, 6, 119, 88, 194, 237, 156, 179, 126, 81,
                                          32, 15, 59, 20, 101, 74, 135, 168, 217, 246, 108, 67, 50, 29, 208, 255, 142, 161, 227, 204, 189, 146, 95, 112, 1, 46, 180, 155, 234, 197, 8, 39, 86, 121, 77, 98, 19, 60, 241, 222,
                                          175, 128, 26, 53, 68, 107, 166, 137, 248, 215, 144, 191, 206, 225, 44, 3, 114, 93, 199, 232, 153, 182, 123, 84, 37, 10, 62, 17, 96, 79, 130, 173, 220, 243, 105, 70, 55, 24, 213, 250,
                                          139, 164, 5, 42, 91, 116, 185, 150, 231, 200, 82, 125, 12, 35, 238, 193, 176, 159, 171, 132, 245, 218, 23, 56, 73, 102, 252, 211, 162, 141, 64, 111, 30, 49, 118, 89, 40, 7, 202, 229,
                                          148, 187, 33, 14, 127, 80, 157, 178, 195, 236, 216, 247, 134, 169, 100, 75, 58, 21, 143, 160, 209, 254, 51, 28, 109, 66 };

unsigned char P_L_CC_KENNUNG_APV_AIRBAG01[16] = { 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40 };
unsigned char P_L_CC_KENNUNG_APV_KlemmenStatus01[16] = { 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3 };
unsigned char P_L_CC_KENNUNG_APV_ESP02[16] = { 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA };
unsigned char P_L_CC_KENNUNG_APV_ESP10[16] = { 0xac, 0xac, 0xac, 0xac, 0xac, 0xac, 0xac, 0xac, 0xac, 0xac, 0xac, 0xac, 0xac, 0xac, 0xac, 0xac };
unsigned char P_L_CC_KENNUNG_APV_ESP20[16] = { 0xAC, 0xB3, 0xAB, 0xEB, 0x7A, 0xE1, 0x3B, 0xF7, 0x73, 0xBA, 0x7C, 0x9E, 0x06, 0x5F, 0x02, 0xD9 };
unsigned char P_L_CC_KENNUNG_APV_ESP21[16] = { 0xb4, 0xef, 0xf8, 0x49, 0x1e, 0xe5, 0xc2, 0xc0, 0x97, 0x19, 0x3c, 0xc9, 0xf1, 0x98, 0xd6, 0x61 };
unsigned char P_L_CC_KENNUNG_APV_ESP24[16] = { 0x67, 0x8A, 0xAE, 0x22, 0x4D, 0xD0, 0x51, 0x80, 0x5C, 0xB9, 0xCE, 0x1E, 0xDF, 0x02, 0x2D, 0xD4 };
unsigned char P_L_CC_KENNUNG_APV_TSK07[16] = { 0x78, 0x68, 0x3A, 0x31, 0x16, 0x08, 0x4F, 0xDE, 0xF7, 0x35, 0x19, 0xE6, 0x28, 0x2F, 0x59, 0x82 };
unsigned char P_L_CC_KENNUNG_APV_LH_EPS01[16] = { 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29 };
unsigned char P_L_CC_KENNUNG_APV_WBA03[16] = { 0x47, 0x94, 0x92, 0x6A, 0x67, 0xB5, 0x0D, 0x38, 0xE3, 0x8A, 0x5D, 0xB4, 0x54, 0xAB, 0xAE, 0x27 };
unsigned char P_L_CC_KENNUNG_APV_MCODE01[16] = { 0x47, 0x47, 0x47, 0x47, 0x47, 0x47, 0x47, 0x47, 0x47, 0x47, 0x47, 0x47, 0x47, 0x47, 0x47, 0x47 };
unsigned char P_L_CC_KENNUNG_APV_SWA01[16] = {0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C};
unsigned char P_L_CC_KENNUNG_APV_LICHT_ANF[16] = { 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07 };

#endif