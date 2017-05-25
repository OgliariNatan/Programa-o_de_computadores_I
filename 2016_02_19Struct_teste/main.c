#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

int main()
{
    setlocale(LC_CTYPE,"portuguese");

    struct campeonato {
        char nomeTime[50];
        int jogosRe;
        int pontos;
    };
    struct campeonato time[20];

    int x=0;
    for (x=0; x<5; x++){
    printf("Digite o Nome do time %d:\t",x);
        fflush(stdin);
        gets(time[x].nomeTime);
    printf("Digite o Números de jogos %d:\t",x);
        fflush(stdin);
        scanf("%d",&time[x].jogosRe);
    printf("Digite o Números de Pontos %d:\t",x);
        fflush(stdin);
        scanf("%d",&time[x].pontos);
    }

    int y=0;
    for ()



    printf("\nNome do Time: %s\n",time[0].nomeTime);








    return 0;
}
