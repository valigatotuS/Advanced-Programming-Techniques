/*
    By: @vq
    Created: 2021/12/27 by vq
*/

#define MAX_LINE_LENGTH 128   

#include "wpo2_lib.h"

void ReadConfigFile(const char* path){
    FILE* fp = fopen(path, "r");
    char buffer[MAX_LINE_LENGTH];
    

    if(fp == NULL){
        printf("Error, could not open file %s", path);
        exit(1); // exit failure
    }   

    while(fgets(buffer, MAX_LINE_LENGTH, fp)){
        printf("%s", buffer);        
        double result = ReadOperation(buffer);
        printf("# gives %.1f\n", result);
    }
}