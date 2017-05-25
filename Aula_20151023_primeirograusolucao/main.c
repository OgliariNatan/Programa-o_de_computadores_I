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
        x=((-b)/a); /// x=((float)(-b)/a); tem esta opção
        printf("O valor de x é: %.2f",x);
    }
    else if (a==0 && b!=0)
        printf("Solução impossível");
    else
        printf("Solução indeterminada");




    return 0;
}
