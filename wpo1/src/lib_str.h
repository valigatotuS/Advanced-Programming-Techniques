/*
    By: @vq
    Created: 2021/12/10 by vq
*/

#ifndef LIB_STR_H
#define LIB_STR_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char*   strcat_(const char* str1, const char* str2);
char*   strcpy_(const char* str);
int     strlen_(const char* str);
int     strlen_v0(char* str);
int     strcntdel_(const char* str, char del);
int     strcpos_(const char* str, const char c);
char** strsplit_(const char* str, const char del);

#endif