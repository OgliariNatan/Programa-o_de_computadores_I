#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main()
{
    setlocale(LC_CTYPE,"portuguese");

    float salario, aumento;
    printf("Digite o seu salário e em seguida o seu aumento em %%\n");
       fflush(stdin);
       scanf("%f %f",&salario, &aumento);
       aumento=((aumento/100)+1);
       salario*=aumento;

       printf("Seu novo salário é de: %0.2f",salario);

    return 0;
}
