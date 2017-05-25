#include <stdio.h>
#include <stdlib.h>

float calcula (int *);

int main()
{
    int Elementos[11] = {9,7,6,5,8,9,10,3,6,5,-1};
    float Media;
    Media = calcula(&Elementos[0]);
    printf("Media = %.2f",Media);

    return 0;
}

float calcula(int *p)
{
    int n = 0, soma = 0;
    float x;
    while(*p!=-1)
    {
        soma = soma + *p;
        p++;
        n++;
    }
    x =(1.0)*soma/n;
    return x;
}
