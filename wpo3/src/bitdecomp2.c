/*
    By: @vq
    Created: 2021/12/28 by vq
*/

#include "wpo3_lib.h"

#define GETBIT(num, pos) (num>>pos&1)

char* bit_decomp2(int decimal, int length){
    char* bin = (char*)malloc((length+1)*sizeof(char));

    for (int i = length-1; i >= 0; i--)
        bin[length-i-1] = '0' + GETBIT(decimal, i); //ASCII-table
    bin[length] = '\0';

    return bin;
}