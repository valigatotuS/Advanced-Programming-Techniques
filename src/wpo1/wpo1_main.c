#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

#include "strlen.c"
#include "strcpy.c"
#include "strcat.c"
#include "strcntdel.c"

int main() {
    /*
        Comment/Uncomment desired code to test the functions -> string-operations
    */

    char* my_str = "Lorem ipsum dolor, sit amet consectetur adipisicing elit. Sunt, beatae.";
    
    printf("My string: <%s>\n", my_str);

    // int str_length = strlen_(my_str);
    // printf("\t*string length: %d\n", str_length); 

    // char* str_copy = strcpy_(my_str);
    // char* str_fakecopy = my_str;
    // printf("\t*string copy: %s\n", str_copy); 
    // printf("\
    // \t\tstr-adress          <%d>\n\
    // \t\tstr_fakecopy-adress <%d>\n\
    // \t\tstr_copy-adress     <%d>\n"\
    // ,my_str,str_fakecopy,str_copy);

    // char* my_str2 = "=>Concatted";
    // char* str_concatenated = strcat_(my_str,my_str2);
    // printf("\t*string concatenated: %s\n", str_concatenated); 

    char* str_csv = ",,,ok,,ko,op,opp,,,";
    int cnt = strcntdel_(str_csv, ',');
    printf("\t*delimiter count: %i\n", cnt); 


    return 0;
}