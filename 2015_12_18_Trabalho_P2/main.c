#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

void inverte(char texto[100], int tam);

int main()
{
    setlocale(LC_CTYPE,"portuguese");
    char texto[100];
    int tam=0;

        printf("Digite uma frase:\n");//informa o usuario
            fflush(stdin);//limpa o buffer
            gets(texto);//le a string
        printf("Sua frase �: %s\n\n",texto);//mostra a string

    tam = strlen(texto);///conta quantas letras tem incluindo os espa�os e o '\0'
        printf("Numero de string �: %d\n\n",tam);// imprimi o numero de string

    inverte(texto,tam);//chama a fun��o para inverter

   printf("Sua frase Invertida �: %s\n",texto);
    return 0;
}

void inverte(char texto[], int tam) {
    char auxA[100];
    char auxB[100];

    int i=0, y=0, com=0;

       for (i=0; i<=tam; i++){//varre a matriz string
            printf("i=%d\n",i);
            if ((i==' ')||(i=='\0')){ // quando encontra o espa�o
                    printf("Condi��o verdadeira\n");
                    for(; texto[com]!=' ' ;com++) {
                            auxA[y] = texto[com];
                           // y++;
                           strcat(auxB, auxA);
                    }
                     printf("auxA= %s\n",auxA);
                     strcat(auxB, auxA);
            }

        }
       //strcpy(texto,auxB);

    }
