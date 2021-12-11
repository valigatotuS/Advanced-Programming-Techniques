/*
    By: @vq

    Created: 2021/12/08 by vq

*/

#include "lib_str.h"

int strlen_(const char* str){
    int count = 0;
    while(*str){
        str++;
        count++;
    }
    return count;
}

int strlen_v0(char* str){
    int len = 0;
    while(str[len] != 0){
        len++;
    }
    return len;
}
