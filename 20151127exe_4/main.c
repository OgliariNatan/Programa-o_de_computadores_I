#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i;
   int vector[3]={4,7,1}, *pointer;

    pointer=vector;///EM C é igual a pointer = &vector [0];
    printf("Size do Int nessa plataf.:%d\n\n",sizeof(int));
    printf("End. vector: %p\n",vector);
    printf("End. apontado por pointer: %p\n",pointer);
    printf("End. onde está pointer: %p\n", &pointer);

    for(i=0; i<3; i++){
        printf("O endereco do indice %d do vector e %p \n",i,&pointer[i]);
        printf("O valor do indice  %d do vector e %d\n", i, pointer[i]);
    }



   // printf("Hello world!\n");
    return 0;
}
