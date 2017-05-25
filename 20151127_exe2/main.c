#include <stdio.h>
#include <stdlib.h>

const int size=100;

int main()
{

    int *a, *b,c=3, d=7;
    a=&c;
    b=&d;
    *a=5;
    *b=8;
    *a=*b;
    *a=2;
    b=a;
    *b=0;
    printf("O valor de C %d\n\bO valor de D %d",c,d);

    //printf("Hello world!\n");
    return 0;
}
