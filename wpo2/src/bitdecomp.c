/*
    By: @vq
    Created: 2021/12/16 by vq
*/
#include "wpo2_lib.h"

#define PRECISION 8
#define getbit(num, pos) (num>>pos&1)

void BitDecomp(){
    int num;
    scanf("%i", &num);
    for (int i = 1; i <= PRECISION; i++){
        printf("%i", getbit(num, PRECISION-i));
        if(i%4==0) printf(" | ");
    }
    printf("\n");
}