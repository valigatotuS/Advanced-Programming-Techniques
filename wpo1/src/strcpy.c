/*
    By: @vq

    Created: 2021/12/08 by vq

*/

#include "lib_str.h"

char* strcpy_(const char* str){
    int str_length = strlen_(str);
    int index = 0;
    char* strcpy = (char*)malloc((str_length+1)*sizeof(char));

    while(*str)
        strcpy[index++] = *(str++); 

    strcpy[index] = '\0';

    return strcpy;
}
