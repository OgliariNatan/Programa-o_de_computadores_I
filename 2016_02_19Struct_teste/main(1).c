#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

    const int TAM = 4;
    struct campeonato {
        char nomeTime[50];
        int jogosRe;
        int pontos;
    };

int main()
{
    setlocale(LC_CTYPE,"portuguese");


    struct campeonato time[TAM];
///////////////////////////////////////entrada de dados
    int x = 0;
    for (x=0; x<TAM; x++){
    printf("Digite o Nome do time %d:\t",(x+1));
        fflush(stdin);
        gets(time[x].nomeTime);
    printf("Digite o Números de jogos %d:\t",(x+1));
        fflush(stdin);
        scanf("%d",&time[x].jogosRe);
    printf("Digite o Números de Pontos %d:\t",(x+1));
        fflush(stdin);
        scanf("%d",&time[x].pontos);
    }
/////////////////////////////////campeao
   int i,j;
   struct campeonato aux;
   for(i=TAM-1;i>=1;i--) {
    for(j=0;j<i;j++) {
      if(time[j].pontos > time[j+1].pontos) {
            aux = time[j];
            time[j]=time[j+1];
            time[j+1]=aux;
        }
      }
    }

//////////////////////////mostra
    int n;
    for (n=TAM-1; n>=0; n--){

        printf("\nTime em ordem crecente de posição:\t");
        printf("%s",time[n].nomeTime);

    }

    return 0;
}
