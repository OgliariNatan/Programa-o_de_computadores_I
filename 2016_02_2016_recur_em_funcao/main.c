#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fibonacci (int num);

int main()
{
    setlocale(LC_ALL,"portuguese");
    int n=100, i;

    i = fibonacci(n);


    printf("O numero final é: %i\n",i);
    return 0;
}



int fibonacci(int num)
{
    int x = 0;
   if(num==1 || num==2)
       return 1;
   else {
   x = fibonacci(num-1) + fibonacci(num-2);
   printf("%d\t",x);
   }
       return x;
}
