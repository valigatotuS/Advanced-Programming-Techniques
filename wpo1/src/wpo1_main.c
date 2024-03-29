#include <stdio.h>
#include "lib_str.h"
#include "lib_matrix.h"


int main() {
    /*
        Comment/Uncomment desired code to test the functions        
    */

    #pragma region String Operations

    char* my_str = ",,,ok,,ko,op,opp,,,";   //"Lorem ipsum dolor, sit amet consectetur adipisicing elit. Sunt, beatae.";
    char* str_csv = ",,,ok,,ko,op,opp,,,"; 

    printf("My string: <%s>\n", my_str);


    /*String Length*/

    // int str_length = strlen_(my_str);
    // printf("\t*string length: %d\n", str_length); 

    /*String Copy*/

    // char* str_copy = strcpy_(my_str);
    // char* str_fakecopy = my_str;
    // printf("\t*string copy: %s\n", str_copy); 
    // printf("\
    // \t\tstr-adress          <%p>\n\
    // \t\tstr_fakecopy-adress <%p>\n\
    // \t\tstr_copy-adress     <%p>\n"\
    // ,my_str,str_fakecopy,str_copy);
    // strfree_(str_copy);

    /*String Concat*/

    // char* my_str2 = "=>Concatted";
    // char* str_concatenated = strcat_(my_str,my_str2);
    // printf("\t*string concatenated: %s\n", str_concatenated); 
    // strfree_(str_concatenated);

    /*String Special Delimiter Count*/

    // int cnt = strcntdel_(str_csv, ',');
    // printf("\tstring csv: %s\n", str_csv);   
    // printf("\t*word count: %i\n", cnt); 

    /*Character position*/

    // printf("%d \n", strcpos_(my_str, 'k'));

    /*String Split*/

    // char** str_splitted = strsplit_(str_csv, ',');
    // while(*str_splitted)
    //     printf("<%s> \n", *(str_splitted++));

    // printf("%p \n %p \n", str_splitted, *str_splitted);

    // for(int i = 0; str_splitted[i]; i++)
    //     free(str_splitted[i]);

    #pragma endregion

    #pragma region Matrix Operations
    /*Matrix Multiplication*/

    // int f[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    // int kernel[3][3] = {{0,-1,0},{-1,4,-1},{0,-1,0}};
    // int result[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
    // matrix_multiplication(f,kernel,result);
    // int** tt = matrix_multiplication2(f,kernel);
    
    // printM(f);
    // printM(kernel);
    // printM(result);
    // printM_p(tt);

    /*Matrix Convolution*/

    int f[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int kernel[3][3] = {{0,-1,0},{-1,4,-1},{0,-1,0}};

    int** resArray = matrix_convolution(f, kernel);
    printM_p(resArray);
    
    #pragma endregion
    return 0;
}