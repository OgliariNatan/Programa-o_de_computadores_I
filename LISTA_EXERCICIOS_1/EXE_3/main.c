#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main()
{
    setlocale(LC_CTYPE,"portuguese");
    float t, dis;

    printf("Digite o tempo em segundo, transcorrido do relampago ate o trov�o\t");
        fflush(stdin);
        scanf("%d",&t);
    dis=340*t;
    printf("A dist�ncia do raio � de %.2f km\n",dis*3600);
    printf("A dist�ncia do raio � de %.2f m\n",dis*3.6);


    return 0;
}
