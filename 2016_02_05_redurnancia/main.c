#include <stdio.h>
#include <stdlib.h>




void troca (char nome[]);


int main()
{
    char nome[10] = "natan";

    troca(nome);

    return 0;
}

void troca (char nome[]){
    char aux[10];
    int x,j=0;


    for (x=0; nome[x]!='\0'; x++){

        if ((nome[x] != 'a') && (nome[x] != 'e') && (aux[x] != 'i') && (aux[x] != 'o') && (aux[x] != 'u')){

            aux[j] = nome[x];
            j++;
        }
    }
    aux[j]='\0';
    printf("%s",aux);
}
