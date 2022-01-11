/*
    By: @vq
    Created: 2021/12/27 by vq
*/

#include "wpo2_lib.h"

double read_operation(char* line){
    int operation = -1, j = 0;
    char ops_s[][16] = {"DIVISION","SUM","SUBTRACTION","MULTIPLICATION"};
    enum {DIV=1,SUM,SUB,MUL}ops;
    double dvals[8];

    // getting operation 
    char* op = strtok(line, "=");
        
    // checking validity of operation
    while(operation < 4){ 
        if(strcmp(op, ops_s[operation++])==0)
            break;          
    }
        
    // getting the values
    char* sval = strtok(0, ",VALUE:");        
    while(sval){
        dvals[j++] = atof(sval);
        sval = strtok(0, ",VALUE:");
    }
    dvals[j] = '\0';
    j = 0;

    // calc operation
    double result = 0;
    switch(operation){
        case -1:
            printf("Invalid operation");
            exit(1);
        case DIV:
            result = dvals[0] / dvals[1];
            break;
        case SUM:
            while(dvals[j])
                result += dvals[j++];
            break;
        case SUB:
            result = dvals[j++];
            while(dvals[j])
                result -= dvals[j++];
            break;
        case MUL:
            result = dvals[0] * dvals[1];
            break;
    }

    return result;
}