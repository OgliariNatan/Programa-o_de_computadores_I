#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0,com=0, y=0, nu[5]={8,3,2,4,9};
    for(x=0;x<4;x++){
        com=nu[x];
            for(y=x+1;com>nu[y];y++)
            {
             nu[x]=nu[y];
             nu[y]=com;
             com=nu[x];
            }
    }
        for (x=0;x<5;x++){
        printf("Os valores sao %d\n",nu[x]);
    }




    return 0;
}
/*
Ordenar os valores de ponteiros, Ex: Lista telefonica.
Bubble sort
Selection sort
Insertion sort


*/
