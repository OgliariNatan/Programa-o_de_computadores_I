#include <stdio.h>
#include <stdlib.h>

float paralelo(float R1, float R2);
float serie(float R1, float R2);


const float PI=3.1415;

int main()
{

    int chave=0;
    float y, R1, R2;
    printf("Digite '1' para serie ou '2' para paralelo \n");
        fflush(stdin);
        scanf("%i",&chave);

     printf("Digite 'R1'\n");
        fflush(stdin);
        scanf("%f",&R1);

     printf("Digite 'R2'\n");
        fflush(stdin);
        scanf("%f",&R2);

        if (chave==1){
            y = serie(R1,R2);
        }
        else if (chave==2){
            y= paralelo(R1,R2);
        }





    printf("%.2f\n",y);
    return 0;
}


float paralelo(float R1, float R2){
float equi;
equi=((R1*R2)/(R1+R2));
return(equi);
}

float serie(float R1, float R2){
float equi;
equi=(R1+R2);
return(equi);
}
