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
        printf("Sua frase é: %s\n\n",texto);//mostra a string

    tam = strlen(texto);///conta quantas letras tem incluindo os espaços e o '\0'
        printf("Numero de string é: %d\n\n",tam);// imprimi o numero de string

    inverte(texto,tam);//chama a função para inverter

   printf("Sua frase Invertida é: %s\n",texto);
    return 0;
}

void inverte(char texto[], int tam) {
    char auxA[100];//={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    char auxB[100];//={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int C=0, N=0, A=0, B=0;

   if(texto[B] != ' ' && B < tam){
            B++;
            for (;texto[A]!=' ';A++){


                    //B=A;

                for(; N<=A; N++){

                    printf("%s",texto[A]);
                    //auxA[N] = texto[A];
                    A--;
                   // printf("A=%d",A);
                }
                C++;
               // strcat(auxB,auxA);
        }

    }
    //strcpy(texto,auxB);
    }
