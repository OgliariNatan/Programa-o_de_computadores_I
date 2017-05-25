#include <stdio.h>

float calcula(int *);

float calcula(int *p)///float pois retorna "x"
{
    int n=0, soma=0;
    float x;
    while (*p!=-1)
    {
        soma=soma+*p;
        p++;
        n++;
    }

    x=(1.0)*soma/n;
    return x;
}


int main()
{
    int elementos [11] = {9,8,7,6,5,4,3,2,10,1,-1};
    float media;
    media=calcula(elementos);
    printf("Media %.2f",media);

    return 0;
}
