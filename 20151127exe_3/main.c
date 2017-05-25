#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k=2010, *pointer=&k;

    printf("0. tamanho do int: %d\n",sizeof(int));
    printf("0. endereco de k; %p\n",&k);
    printf("0. endereco apontado por pointer: %p\n",pointer);

    pointer++;
    printf("1. endereco apontado por pointer: %p\n",pointer);
    pointer++;
    printf("2. endereco apontado por pointer: %p\n",pointer);

    if (pointer>&k){
        printf("O. endereco %p e maior que %p\n",pointer,&k);
    }


    //printf("Hello world!\n");
    return 0;
}
