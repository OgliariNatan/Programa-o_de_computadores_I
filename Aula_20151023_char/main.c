#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_CTYPE,"portuguese");
    char nome[10];
    int n_letras;
    printf("Escreva o seu nome:");
        scanf("%[^\n]s",&nome);///[^\n]ignora o espaco para poder escrever uma frase

    printf("%s",nome);
    n_letras=strlen(nome);
    printf("\nSeu nome tem %d letras",n_letras);

    return 0;
}
