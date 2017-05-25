/*questao-pratica-prova.c*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

const int NUM_MAX_MEDIDAS= 7;
const char NOME_ARQ[]= "dados_amostra.txt";

struct medida
{
    float tensao;
    float corrent;
    char nome_equi[20];
    float potencia;
};

// considere o retorno da função como uma sinalização de erro, ou seja retorne -1 em caso de erro.
int ordena(struct medida *medidas_hora[],int nmed);
int calc_max_pot(struct medida *medidas_hora[], int nmed, char *nome_equipa,float *valor);
int mostra_tela(struct medida *medidas_hora[], int nmed);
int salva_d(struct medida *medidas_hora[], int nmed, char *nome_arquivo);


int main()
{
    setlocale(LC_CTYPE,"portuguese");
    char k, j, n, num_medidas;
    float max_pot;
    char equipamento[50], nome_saida[32];
    FILE* fp;
    struct medida lista[NUM_MAX_MEDIDAS];

    fp = fopen(NOME_ARQ,"r+");
    if (fp==NULL)
    {
        printf("Erro ao abrir o arquivo: %s.\n",NOME_ARQ);
        exit(1);
    }

    lista[0].tensao = 221;
    lista[1].tensao = 219;
    lista[2].tensao = 210;
    lista[3].tensao = 230;
    lista[4].tensao = 221;
    lista[5].tensao = 229;
    lista[6].tensao = 210;
    lista[7].tensao = 210;
    lista[0].corrent = 0.01;
    lista[1].corrent = 0.1;
    lista[2].corrent = 10;
    lista[3].corrent = 30;
    lista[4].corrent = 0.98;
    lista[5].corrent = 0.11;
    lista[6].corrent = 0.72;
    lista[7].corrent = 8;



    printf("Num. medidas no arquivo %s: %d.\n",NOME_ARQ,num_medidas);
    printf("Digite o nome do arquivo a ser salvo:\n");
    gets(nome_saida);
    strcat(nome_saida,".txt\0");

    k = calc_max_pot(lista, num_medidas, equipamento, &max_pot);
// Escrever o código de verificação de erro
// relativo a maxima potencia
   // printf("\nA maxima potencia é: %0.2f.\tDo equipamento : %s\n", max_pot, equipamento);

   // k=ordena(lista, num_medidas);
// Escrever o código de verificação de erro
// relativo a ordenação


    //k = mostra_tela(lista, num_medidas);
// Escrever o código de verificação de erro
// relativo a mostra_tela



   // k = salva_d(lista, num_medidas,nome_saida);
// Escrever o código de verificação de erro
// relativo a salva_dados
    fclose(fp);

    return 0;
}

int ordena(struct medida *medidas_hora[],int nmed)
{
    int i,j;
    medida aux;

    for(i=NUM_MAX_MEDIDAS-1; i>=1; i--) {
        for(j=0;j<i;j++) {
           if(medidas_hora[j].potencia > medidas_hora[j+1].potencia) {
                aux = (medidas_hora[j]);
             medidas_hora[j]=medidas_hora[j+1];
               medidas_hora[j+1]=aux;
        }
    }
    }
return 0;
}
int calc_max_pot(struct medida *medidas_hora[], int nmed, char *nome_equipa,float *valor)
{
//Implemente a função que retorne o nome do equipamento de maior potência e o valor da potencia.

return 0;
}
int mostra_tela(struct medida *medidas_hora[], int nmed)
{
//Implemente a função para mostrar todos os dados na tela
// equipamento   tensão   corrente   potencia
//ex forno        220V      10A        2200W

return 0;
}
int salva_d(struct medida *medidas_hora[], int nmed, char *nome_arquivo)
{
//Implemente a função para salvar os dados em um arquivo texto


return 0;
}

 /*


     /*
     while (1){
        for(j=0; j<NUM_MAX_MEDIDAS; j++){
                    n = fscanf(fp,"%.2f %.2f %c ", lista[j].tensao, lista[j].corrent, lista[j].nome_equi);///armazena os valores lido em n
                }

            if (n==EOF)///verifica o fim do arquivo
                break;
      }
    */




