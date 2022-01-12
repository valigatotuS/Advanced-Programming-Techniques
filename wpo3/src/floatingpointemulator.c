/*
    By: @vq
    Created: 2021/12/27 by vq
*/

#include "wpo3_lib.h"

void float_p_emul(float number){
    
    typedef struct{
        uint mantissa:23; // defines accuracy of number           LeastSignificantBit
        int exponent:8;   // defines floating point position             |  |
        uint sign:1;      // defines sign of number               MostSignificantBit
    }fpe;

    typedef union {
        fpe field;
        float number;
    }single_precision;
    
    single_precision sp;
    sp.number = number;

    printf("%s|%s|%s\n",
        bit_decomp2(sp.field.sign, 1),
        bit_decomp2(sp.field.exponent, 8),
        bit_decomp2(sp.field.mantissa, 32));
}