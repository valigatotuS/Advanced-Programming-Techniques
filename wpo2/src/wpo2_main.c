#include <stdio.h>
#include <stdarg.h>
#include "wpo2_lib.h"

#pragma region variodic function
int Sum(int num, ...){
    va_list arguments;
    int sum=0;
    va_start(arguments, num);
    for (int i = 0; i < num; i++)
        sum += va_arg(arguments, int);
    va_end(arguments);
}
#pragma endregion


int main() {
    /*
        Comment/Uncomment desired code to test the functions -> string-operations
    */

    #pragma region intro code
    // int number;
    // scanf("%d", &number);
    // printf("the number i equals:%i\n", number);

    // FILE *fp;
    // fp = fopen("./test.txt","w+");
    // if (fp)
    // {
    //     fprintf(fp,"Wroted line kokok.\n");
    //     fclose(fp);
    // }

    // int c;
    // FILE *fp;
    // fp = fopen("./test.txt","r");
    // if (fp)
    // {
    //     while ((c=fgetc(fp))!=EOF)
    //         printf("%c",(char)c);
    //     fclose(fp);
    // }
    
    // int area_ = CalcArea(&AreaR,5,6);
    // printf("%i\n", area_);

    // printf("%i\n", Sum(5,1,1,1,1,1));
    #pragma endregion

    #pragma region exercise1
    
    // PrintBitDecomp(8);

    #pragma endregion

    #pragma region exercise2

    FancyPrint("Hello, this is a fancyprint, string: %s char: %c int: %i", 3, "str", 'f', 456);

    #pragma endregion

    #pragma region exercise3

    1;

    #pragma endregion

    return 0;
}