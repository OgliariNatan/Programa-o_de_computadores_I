#include <stdio.h>
#include <stdlib.h>

const int TAM = 4;
int main()
{

    int i, *ptr, notas[TAM];



    ptr = notas;
    for (i=0; i<TAM; i++){
        printf("digite a %d notas do aluno\n",i+1);
        scanf("%d",(*ptr));
        ptr++;
    }



/*
    ptr = nome;

    while(*ptr!='\0'){
        printf("%c \n",*ptr);
        ptr++;
    }

*/

    return 0;
}
