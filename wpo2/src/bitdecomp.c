/*
    By: @vq
    Created: 2021/12/16 by vq
*/
#include "wpo2_lib.h"

#define PRECISION 16
#define getbit(num, pos) (num>>pos&1)

void BitDecomp(){
    int num;
    scanf("%i", &num);
    for (int i = PRECISION-1; i >= 0; i--){
        printf("%i", getbit(num, i));
        if(i%4==0) printf(" | ");
    }
    printf("\n");
}