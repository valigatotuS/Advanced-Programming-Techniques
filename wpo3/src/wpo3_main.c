#include "wpo3_lib.h"

int main() {
    /*
        Comment/Uncomment desired code to test the functions 
    */

    #pragma region intro code

    // typedef struct{
    //     uint X;
    //     uint Y;
    //     uint Z;
    // } position_t;

    // position_t p;
    // p.X = 5;
    // p.Y = 8;
    // p.Z = 10;

    // printf("point at x:%i y:%i z:%i\n", p.X, p.Y, p.Z);
    // printf("size of position_t is : %li", sizeof(position_t));

    // typedef struct{ // this is a bitfield
    //     uint sign:1;
    //     uint value:31; //bitfields occupies a mem alloc of n*32 bits
    // }integer_t;

    // integer_t i;
    // i.sign = 1; // more than 1 would mean in a overflow error
    // i.value = 32;
    // printf("value, sign:%i (0:+,1:-) value:%i", i.sign, i.value);

    // typedef struct{ 
    //     unsigned char val1;
    //     unsigned char val2;
    //     unsigned char val3;
    //     unsigned char val4;
    // }char_array_t;

    // typedef union{
    //     char_array_t chars;
    //     int integer;
    // }integer_t;

    // //printf("%li", sizeof(integer_t));

    // integer_t vals; 
    // vals.chars.val1 = 255;
    // vals.chars.val2 = 0;
    // vals.chars.val3 = 0;
    // vals.chars.val4 = 0;
    // unsigned char* val1 = &vals.chars.val1;
    // unsigned char* val2 = &vals.chars.val2;
    // unsigned char* val3 = &vals.chars.val3; 
    // unsigned char* val4 = &vals.chars.val4;

    // printf("%p %p %p %p\n", val1, val2, val3, val4);
    // printf("%i\n", vals.chars.val1);//, *val2, *val3, *val4);

    // typedef struct position_t{
    //     uint X, Y, Z;
    // }position;

    // position p;
    // position* pointer_p = &p;
    // pointer_p->X = 5;
    // pointer_p->Y = 6;
    // pointer_p->Z = 7;
    // uint val = pointer_p->X;
    // pointer_p->X = 10;
    // printf("-%i-\n",val);
    // printf("-%i-\n",p.X);

    // position *p = (position*)malloc(sizeof(position));

    

    #pragma endregion

    #pragma region exercise1
    // float_p_emul(-1024.3);
    #pragma endregion

    #pragma region extra
    
    int array[] = {4,5,8,2,2,3,5,4,47,1,5,6}, size = 12;
    bubble_sort(array,size);
    
    for(int i = 0; i < size; i++)
        printf("%d,",array[i]);

    #pragma endregion

    return 0;
}