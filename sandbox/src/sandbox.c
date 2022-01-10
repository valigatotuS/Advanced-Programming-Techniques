#include <stdio.h>
#include <string.h>

int main(){

    /*String Manipulations*/

    char str1[14] = "Utopia", str2[14] = "Thomas", str3[14];
    int len;

    strcpy(str3,str1);
    printf("strcpy(str3,str1) = %s\n", str3);
    strcat(str1,str2);
    printf("strcat(str1,str2) = %s\n", str1);
    len = strlen(str1);
    printf("strlen(str1) = %d\n", len);
    puts("I am a non formatted string"); // (& newline at the end)
    puts(str3);

    /*Structures*/

    typedef int M3X3_t[3][3];
    
    typedef struct {
        float real;
        float imag;
    } complex;
    
    struct {
        int i;
        float a;
        complex c;
    } getal;

    getal.i = 5;
    getal.a = 5.5;
    getal.c.real = 5.2;
    getal.c.real = 5.4;

    printf("size(getal): %ld\n", sizeof(getal));

    typedef struct node{
        char data;
        struct node* next;
    }node;

    /*Union*/

    union {
        int i;
        char ch;
    } antwoord;
    antwoord.ch = 'e';

    /*enum*/

    enum kleur {
        rood = -10, groen, blauw, paars, geel
    } kleuren;
    kleuren = groen;
    int r = rood, g = groen, b = blauw, p = kleuren, ge = geel;

    printf("%d %d %d %d %d\n", r, g, b, p, ge);

    /*bitfields*/

    struct {
        int i1:1;
        int i4:4;
        int i8:8;
    } cw1;

    cw1.i1 = 0x1;
    cw1.i4 = 0xB;
    cw1.i8 = 0x12;

    printf("cw...: %d %d %d\n", cw1.i1,cw1.i4,cw1.i8);
    char A = 'A';

    /*string-formatter*/

    printf("%c,%03d,%-3i,%o,%u,%x,%%",A,A,A,A,A,A);

    /*static*/

    int supp(){
        static int i = 0; 
        return i++;
    }
    printf("\n<%d %d %d>\n", supp(),supp(),supp());





    return 0;
}