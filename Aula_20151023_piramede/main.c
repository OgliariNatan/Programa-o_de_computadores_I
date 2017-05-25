#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE,"portuguese");
    int col=0, lin=0, x;
    printf("Digite o número de colunas\n");
        scanf("%i",&x);

    while (col<x){
        while (lin<=col){
            printf("#");
            lin++;
        }
        lin=0;
        printf("\n");
        col++;
    }


    return 0;
}
