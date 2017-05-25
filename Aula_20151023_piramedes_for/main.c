#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE,"portuguese");
    int col=0, lin=0, x;
    printf("Digite o número de colunas\n");
        scanf("%i",&x);

    for(col=0;col<x;col++){
            for(lin=0;lin<col;lin++){
                printf("#");
            }
        printf("\n");
    }

    /*
    while (col<x){
        while (lin<=col){
            printf("#");
            lin++;
        }
        lin=0;
        printf("\n");
        col++;
    }
*/

    return 0;
}
