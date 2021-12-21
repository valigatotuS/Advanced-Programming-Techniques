/*
    By: @vq
    Created: 2021/12/16 by vq
*/

#include "wpo2_lib.h"

void FancyPrint(const  char* str, int num, ...){

    va_list argptr;
    va_start( argptr, num );

    for( int i = 0; i < num; i++ ){
        while (*str)
        {
            if(*str=='%'){
                if(*(str+1)=='s')
                    printf("\033[31m%s\033[0m" , va_arg(argptr, const char*));
                else if(*(str+1)=='c')
                    printf("\033[34m%c\033[0m", va_arg(argptr, int));
                else if(*(str+1)=='i')
                    printf("\033[32m%i\033[0m", va_arg(argptr, int));
                if(*(str+1)=='s' || *(str+1)=='c' || *(str+1)=='i')
                    str+=2;
            }
            printf("%c", *(str++));
        }
    }
    va_end( argptr );
    printf("\n");




    /*A number: %i, a string: %s, and a character: %c*/
    //numbers in green
    //strings in red
    //characters in yellow
    // va_list args;
    // int k = 0;
    // while(*str){
    //     if(*str == '%'){
    //         va_start(args, num);
    //         while(num--){
    //             // if      (*(str+1)=='c')
    //             //     printf("\033[34m %c \033[0m", va_arg(arguments, int));
    //             // else if (*(str+1)=='i')
    //             //     printf("\033[32m %i \033[0m", va_arg(arguments, int));
    //             // else if (*(str+1)=='s')
    //             //     printf("\033[31m %s \033[0m", va_arg(arguments, char*));
    //             printf("%s", va_arg(args, const char*));
    //         }
    //         va_end(args);
    //         //printf("%s", new_str);
            
    //         //clear newstr
    //     }
    //     str++;
    // }
    // printf("\033[31m Red \033[0m");
    // printf("\033[32m Green \033[0m");
    // printf("\033[34m Blue \033[0m");
}