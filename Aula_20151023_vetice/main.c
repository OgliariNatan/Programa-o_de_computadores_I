#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE,"portuguese");

    int x1, y1, x2, y2, x5, y5;
    printf("Entre com valores de X e Y:");
        scanf("%d %d",&x1,&y1);
    printf("Entre com valores de X e Y:");
        scanf("%d %d",&x2,&y2);

    printf("X3 �: %d Y3 �: %d",x1,y2);
    printf("\nX4 �: %d Y4 �: %d",x2,y1);

    printf("\nEntre com valores de X e Y para verificar se pertence ao retangulo\t");
        scanf("%d %d",&x5,y5);

    if((y5<=y2)&&(y5>=y1)){
        if((x5<=x2)&&(x5>=x1)){
        printf("\nOs pontos pertencem ao retangulo");
        }
    }
        else
            printf("\nN�o Pertence ao retangulo");

    return 0;
}
