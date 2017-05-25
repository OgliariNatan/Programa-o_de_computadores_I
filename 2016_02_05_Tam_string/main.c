#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main()
{
    setlocale (LC_CTYPE,"portuguese");
    char nome[10];
    char le;
    int x =0;
  //  int n_letras = 10;
    printf("Escreva o seu nome\n");
        scanf("%[^\n]s",nome);

   // n_letras=strlen(nome);

    printf("Digite uma letra\n");
        fflush(stdin);
        scanf("%c",&le);
    printf("ende %p\n",&le);
    printf("ende %p\n",&nome[0]);

    for (x=0; nome[x] != '\0' ; x++){

        if(le==nome[x]){
            printf("Posição: %d \n",x);
        }

    }
    return 0;
}
