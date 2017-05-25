#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>


int main()
{
    setlocale(LC_CTYPE,"portuguese");
   unsigned char px, py, ax, ay;
    printf("Digite os dois pontos px, py, ax, ay\n");
        fflush(stdin);
        scanf("%d %d %d %d",&px, &py, &ax, &ay);

        px-=ax;
        py-=ay;
        px=sqrt((px^2)+(py^2));


    printf("A distância entre os dois pontos é: %d\n",px);
    return 0;
}
