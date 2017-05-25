#include <stdio.h>
#include <stdlib.h>

const int size=100;

int main()
{

    int vector[size], i, *pointer;
    pointer = &vector[0];

    for(i=0;i<size;i++){
        *pointer=i;
        printf("O endereco %p\n", pointer);
        pointer++;
    }

    for(i=0; i<size; i++){
       // vector[i]= *pointer;
        printf("%d\n",vector[i]);
    }


    //printf("Hello world!\n");
    return 0;
}
