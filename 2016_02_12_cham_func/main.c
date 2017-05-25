#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

double fatorial (int n);


int main()
{
    setlocale(LC_ALL,"portuguese");

int n, fat;

printf("Digite um numero\n");
    scanf("%i",&n);

fat = fatorial(n);

    printf("O valord %i:\n",fat);

    return 0;
}

double fatorial (int n){
double fat;

    if(n>1)
        fat = n*fatorial(n-1);
    else return 1;

    return fat;
}
