/*
    By: @vq
    Created: 2021/12/08 by vq
*/

#include "lib_str.h"

char* strcat_(const char* str1, const char* str2){
    int str_length = strlen_(str1) + strlen_(str2);
    char* str_ = (char*)malloc((str_length+1)*sizeof(char));
    int index = 0;

    while(*str1)
        str_[index++] = *(str1++);

    while (*str2)
        str_[index++] = *(str2++);

    str_[index] = '\0';

    return str_;
}
