#include <stdio.h>
#include <stdlib.h>

void calculaR(float *, float *, float, float );

int main()
{
    float Serie, Paral, Resist1, Resist2;
    printf("Entre com o valor do resistor 1\n:");
    scanf("%f",&Resist1);
    printf("Entre com o valor do resistor 2\n:");
    scanf("%f",&Resist2);
    calculaR (&Serie,&Paral, Resist1, Resist2 );
    printf("Valor Serie = %.2f e Papalelo = %.2f", Serie, Paral);
    return 0;
}

void calculaR      (float *S, float *P, float R1, float R2)
{

    *S = (R1+ R2);
    *P = (R1*R2)/(R1+R2); // ou *P = (R1*R2)/(*S);
}
