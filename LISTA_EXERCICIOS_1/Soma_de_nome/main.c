#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main()
{
    setlocale(LC_CTYPE,"portuguese");
    char nome[40];
    int soma;

    printf("Digite o seu nome:");
        gets(nome);

    printf("Seu nome é:%c",nome);



       return 0;
}
