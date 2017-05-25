#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_CTYPE,"portuguese");
    char nome[10], sobrenome[10], nome_comp[20], es[2]=" ";
    int n_letras;
    printf("Escreva o seu nome:");
        scanf("%s",&nome);///[^\n]ignora o espaco para poder escrever uma frase
    printf("Escreva o seu Sobrenome:");
        scanf("%s",&sobrenome);

    strcat(nome, es);
    strcat(nome, sobrenome);
   // printf("%s",&nome);
   strcpy(nome_comp, nome);

    printf("Seu Nome completo é: %s",nome_comp);

   /// n_letras=strlen(nome);
   /// printf("\nSeu nome tem %d letras",n_letras);




  return 0;
}
