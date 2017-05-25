#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void inverte(char texto[100], int tam);

int main()
{
    setlocale(LC_CTYPE,"portuguese");
    char texto[100];
    int tam=0;

        printf("Digite uma frase:\n");
            fflush(stdin);
            gets(texto);
        printf("Sua frase é: %s\n",texto);
    tam = strlen(texto);

   inverte(texto,tam);

   printf("Sua frase Invertida é: %s\n",texto);
    return 0;
}

void inverte(char texto[], int tam) {
    char auxA[100];
    char auxB[100];
    char auxC[100];
    int i=0, x=0, y=0, com=0, gra=0, g=0;

       for (i=0; i<tam; i++){

            if (i==' '){
                    for(com=0; com<' ';com++) {

                        for (x=com; x>tam; x--){
                            y=0;
                            auxA[y] = texto[x];
                            y++;
                        }
                        for (x=y; x>tam; x--){
                            g=0;
                            auxB[g] = texto[x];
                            y++;
                        }
                    }
                     strcat(auxA, auxB);
            }
        }
        strcpy(texto,auxA);
    }
