#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

void inverte( char[]);

void main(void){
    char palavra[20];
    printf("Digite algo!\n");
    gets(palavra);

    inverte(palavra);
    printf("%s",palavra);
}

void inverte(char palavra[]){
    int j, a=0, aux=0, b, tam=0,c=0;
    char st1[20];

    for( j=0; j <= strlen(palavra); j++){
        st1[a]=palavra[j];

        if( palavra[j]==' ' || palavra[j]=='\0' ){
            tam =  a - tam;
            aux =  a - 1;

            for(b=0; b<tam; b++ ){
                palavra[b+c]=st1[aux];
                aux--;
            }

            tam++;
            c =  tam;

        }
        a++;
    }
}
