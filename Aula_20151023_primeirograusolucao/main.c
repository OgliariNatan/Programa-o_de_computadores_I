#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE,"portuguese");
    float a, b;
    float x;


    printf("Digite o valor para A: \n");
        scanf("%f",&a);
    printf("Digite o valor para B: \n");
        scanf("%f",&b);

    if (a!=0){
        x=((-b)/a); /// x=((float)(-b)/a); tem esta op��o
        printf("O valor de x �: %.2f",x);
    }
    else if (a==0 && b!=0)
        printf("Solu��o imposs�vel");
    else
        printf("Solu��o indeterminada");




    return 0;
}
