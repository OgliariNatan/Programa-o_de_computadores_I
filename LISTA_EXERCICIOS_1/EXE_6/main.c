#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main()
{
    setlocale(LC_CTYPE,"portuguese");
    int anos, meses, dias;

    printf("Digite a sua idade em Ano, Meses e dias\n");
        fflush(stdin);
        scanf("%d %d %d",&anos, &meses, &dias);

    anos*=365;
    anos+=(meses*30);
    anos+=dias;

    printf("Seus dias de vida são no total de: %d",anos);
    return 0;
}
