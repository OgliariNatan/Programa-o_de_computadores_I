#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main()
{
    setlocale(LC_CTYPE,"portuguese");

    int c,f;
    printf("Entre com um valor em graus Fahrenheit\t");
        fflush(stdin);
        scanf("%d",&f);
    c=f-32;

    printf("O valor em graus Celsius é: %d\n",c);
    return 0;
}
