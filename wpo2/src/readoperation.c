/*
    By: @vq
    Created: 2021/12/27 by vq
*/

#include "wpo2_lib.h"

double ReadOperation(char* line){
    int operation = -1, j = 0;
    char ops[][16] = {"DIVISION","SUM","SUBTRACTION","MULTIPLICATION"};
    double dvals[8];

    // getting operation 
    char* op = strtok(line, "=");
        
    // checking validity of operation
    while(operation < 4){ 
        if(strcmp(op, ops[operation++])==0)
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
        case 1:
            result = dvals[0] / dvals[1];
            break;
        case 2:
            while(dvals[j])
                result += dvals[j++];
            break;
        case 3:
            result = dvals[j++];
            while(dvals[j])
                result -= dvals[j++];
            break;
        case 4:
            result = dvals[0] * dvals[1];
            break;
    }

    return result;
}