#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main()
{
    setlocale(LC_CTYPE,"portuguese");

    int ladoa, ladob, quadrado;
    printf("Digite um n�mero para o Lado A e outro para o Lado B\n");
        fflush(stdin);
        scanf("%d %d",&ladoa,&ladob);

    quadrado=ladoa*ladob;

    printf("\nO lado A �: %d\n\bO lado B �: %d\n",ladoa,ladob);
    printf("O quadrado dos lado �: %d\n",quadrado);
    return 0;
}
