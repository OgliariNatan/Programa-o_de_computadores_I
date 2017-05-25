#include <stdio.h>
#include <stdlib.h>

void calcula(float *, float *, float );

int main()
{
    float area, perim,raio;
    printf("Entre com o valor do raio\n:");
    scanf("%f",&raio);
    calcula (&area,&perim,raio);
    printf("Area = %.2f e perimetro = %.2f", area,perim);
    return 0;
}

void calcula(float *a, float *p, float r)
{
    float const PI = 3.141592;
    *a = PI * r * r;
    *p = 2 * PI * r;
}
