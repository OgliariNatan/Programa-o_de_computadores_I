#include <stdio.h>
#include <stdlib.h>
float F_Area(float raio);


const float PI=3.1415;

int main()
{

    float r, y;
    printf("Digite o valor do raio\n");
        fflush(stdin);
        scanf("%f",&r);

    y = F_Area(r);


    printf("%.2f\n",y);
    return 0;
}


float F_Area(float raio){
float area;
area=PI*raio*raio;
return(area);
}
