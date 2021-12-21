/*
    By: @vq
    Created: 2021/12/16 by vq
*/

#include "wpo2_lib.h"

int CountChar(const char* str, const char token){
    int count = 0;
    while(*str){
        if(*(str++)==token)
            count++;
    }
    return count;
}