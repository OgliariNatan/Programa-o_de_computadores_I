#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE,"portuguese");

    int x=1;
    while (x<10){
        //printf("Digite um numero: \n");
          //  scanf("%d",&x);
        printf("X é : %d\n\b" ,x);

        x++;
        if (x==5)
            break;
    }





    return 0;
}
