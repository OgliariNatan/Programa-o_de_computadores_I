#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cont(int);

int main()
{
    setlocale(LC_ALL,"portuguese");

    cont(1);

    return 0;
}

void cont(int n){

if (n < 100)
    cont (n+1);

printf("%d\n",n);

}
