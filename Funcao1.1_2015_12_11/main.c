#include <stdio.h>
#include <stdlib.h>
float F_Area(float base, float altura);

float F_Area(float base, float altura){
float area;
area=base*altura;
return (area);
}



int main()
{

    float y;
    float F_Area(float base, float altura);
    y = F_Area(3.1,4.7);



    printf("%.2f\n",y);
    return 0;
}
