/*
Natan Ogliari
No Final esta o outro codigo que não funcionou, mas ele vai funcionar nem que for na força bruta.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

void inverte(char texto[100], int tam);

int main() {

    setlocale(LC_CTYPE,"portuguese");
    char texto[100];
    int tam=0;
    printf("Digite uma frase \n");///Informa o usuario
        fflush(stdin);//limpa o buffer
        gets(texto);///Lê a string
        printf("Sua string é:\b\n%s\n",texto);

    tam = strlen(texto);/// Diz O tamanho da string
    inverte(texto,tam);///chama a Função

return 0;

}

void inverte(char texto[], int tam)
{
    int i,j,a=0,n=0, b=0;

    while(a<=tam){
        if(texto[a]!=' '&&a<tam)
            a++;
    else{
        n=a;
        a--;
        for( ;a>=b;a--)
            printf("%c",texto[a]);
            printf(" ");
            b=n+1;
            a=b;
    }
    }
    return 0;
}
/*
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
    char auxA[100];
    char auxB[100];
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
*/
