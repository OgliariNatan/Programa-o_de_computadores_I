#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

int main()
{
    setlocale(LC_CTYPE,"portuguese");

    struct estoque {
        char nome[50];
        int quantidade;
        float preco;
    } pecaComputador;

    printf("Digite a quantidade:\t");
        scanf("%d",&pecaComputador.quantidade);

    printf("\nPeça Computador Quantidade: %d\n",pecaComputador.quantidade);

    return 0;
}



