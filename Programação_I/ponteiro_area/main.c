#include <stdio.h>
#include <stdlib.h>

void calcula (float*, float*, float);// cabecalho possui ";"


int main()
{
    float a, p, r;
    printf("Entre com o raio:\n");
        scanf("%f",&r);

    calcula(&a,&p,r);

    printf("area= %.2f\n",a);
    printf("Perimetro =%.2f\n",p);

   // printf("Hello world!\n");
    return 0;
}

void calcula(float *s, float *c, float r)//prototipo ñ tem ";"
{
    const float PI = 3.141592;
    *s = PI * r * r;
    *c = 2 * PI * r;
}
