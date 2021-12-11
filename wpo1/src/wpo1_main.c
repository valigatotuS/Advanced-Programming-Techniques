#include <stdio.h>
#include "lib_str.h"


int main() {
    /*
        Comment/Uncomment desired code to test the functions -> string-operations
    */

    char* my_str = ",,,ok,,ko,op,opp,,,";//"Lorem ipsum dolor, sit amet consectetur adipisicing elit. Sunt, beatae.";
    char* str_csv = ",,,ok,,ko,op,opp,,,";

    printf("My string: <%s>\n", my_str);

    // int str_length = strlen_(my_str);
    // printf("\t*string length: %d\n", str_length); 

    // char* str_copy = strcpy_(my_str);
    // char* str_fakecopy = my_str;
    // printf("\t*string copy: %s\n", str_copy); 
    // printf("\
    // \t\tstr-adress          <%p>\n\
    // \t\tstr_fakecopy-adress <%p>\n\
    // \t\tstr_copy-adress     <%p>\n"\
    // ,my_str,str_fakecopy,str_copy);

    // char* my_str2 = "=>Concatted";
    // char* str_concatenated = strcat_(my_str,my_str2);
    // printf("\t*string concatenated: %s\n", str_concatenated); 

    // int cnt = strcntdel_(str_csv, ',');
    // printf("\tstring csv: %s\n", str_csv); 
    // printf("\t*word count: %i\n", cnt); 


    // printf("%d \n", strcpos_(my_str, 'i'));

    char** str_splitted = strsplit_(str_csv, ',');
    while(*str_splitted)
        printf("<%s> \n", *(str_splitted++));
    

    return 0;
}