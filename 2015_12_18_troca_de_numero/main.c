#include <stdio.h>
#include <stdlib.h>

void troca (int *a, int *b);

int main()
{
   int a=1, b=2;// aux;

   troca(&a,&b);

    printf("A = %d \n\bB = %d\n",a,b);
    return 0;
}
void troca (int *a, int *b){
int aux=0;
aux=*a;
*a=*b;
*b=aux;
return 0;
}


