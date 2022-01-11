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
        rood = 65, groen, blauw, paars, geel
    } kleuren;
    kleuren = groen;
    char r = rood, g = groen, b = blauw, p = kleuren, ge = geel;

    printf("%c %c %c %c %c\n", r, g, b, p, ge);

    /*bitfields*/

    struct {
        int i1:1;
        int i4:4;
        int i8:8;
    } cw1;

    cw1.i1 = 0x1;
    cw1.i4 = 0xB;
    cw1.i8 = 0x12;

    printf("cw...:%3d,%d,%d\n", cw1.i1,cw1.i4,cw1.i8);
    char A = 'A';

    /*string-formatter*/

    printf("%c,%03d,%-3i,%o,%u,%x,%%",A,A,A,A,A,A);

    /*static*/

    int supp(){
        static int i = 0; 
        return i++;
    }
    printf("\n<%d %d %d>\n", supp(),supp(),supp());

    /*pointers*/

    double *a_p, array[] = {7.,9.6,7.4,48.4,5.};
    a_p = array;

    printf("a_p: %0.2f %0.2f %p\n", *a_p+1, *a_p, &a_p);

    void printC(char c){
        printf("\n%c\n", c);
    }

    void (*f_p)(char); //function pointer
    f_p = printC;
    (*f_p)('K');

    /*MACROS*/

    #define MAX(a,b) (a>b?a:b)
    #define MIN(a,b) (a<b?a:b)

    printf("MAX(a,b): %d\n", MAX(5,9));
    printf("MIN(a,b): %d\n", MIN(5,9));

    // int arri[4] = {0,1,2,3};
    // printf("\n%u", &arri[0]);
    char* ss;
    ss = "okoko";

    /*Other*/

    printf ("%d\n", printf ("valq"));

    int c;
    printf ("%d\n", c);
    int i = 5;
    printf("%d\n", i=++i==6);
    printf("%d\n", 4+2%-8);
    int x = 15;
    static int ee;
    printf("\n%d,%d,%d,%d\n", x!=15, x=20, x<30, ee);
    const int zz = 32768;
    printf("%ld\n", sizeof(char));
    return 0;
    
    
}