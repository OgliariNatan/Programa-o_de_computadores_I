#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

const int tam = 7;
const char NOME_ARQ[]= "dados_amostra.txt";

struct valorMedido
{
    float tensao;
    float corrent;
    char nome_equi[10];
    float potencia;
};
typedef struct valorMedido medido;

int ordena (medido *lista);
int calPotencia (medido *lista, char *potMax, float *pot_max;);
int mostraTela (medido *lista);



int main()
{
    setlocale(LC_CTYPE,"portuguese");
    FILE *fp;
    medido lista[tam];
    char potMax[10];
    float pot_max;
    fp = fopen(NOME_ARQ,"r+");
    if (fp==NULL)
    {
        printf("Erro ao abrir o arquivo\n");
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


    int o;
    for(o=0; o<tam; o++)
    {
        printf("\n%.0f %.2f %s\n", lista[o].tensao, lista[o].corrent, lista[o].nome_equi)  ;
    }
    calPotencia(lista,potMax, pot_max);
    ordena(lista);
    mostraTela(lista);
    fclose(fp);
    return 0;
}

int mostraTela (medido *lista)
{
    int x;
    for (x=0; x<tam; x++)
    {
        switch (x)
        {
        case 0:
            printf("\nA potencia é: %.2f, do equipemento Lampada\n",lista[x].potencia);
            break;
        case 1:
            printf("\nA potencia é: %.2f, do equipemento Refrigerador\n",lista[x].potencia);
            break;
        case 2:
            printf("\nA potencia é: %.2f, do equipemento Forno\n",lista[x].potencia);
            break;
        case 3:
            printf("\nA potencia é: %.2f, do Chuveiro\n",lista[x].potencia);
            break;
        case 4:
            printf("\nA potencia é: %.2f, do Computador\n",lista[x].potencia);
            break;
        case 5:
            printf("\nA potencia é: %.2f, do Freezer\n",lista[x].potencia);
            break;
        case 6:
            printf("\nA potencia é: %.2f, do Notebook\n",lista[x].potencia);
            break;
        case 7:
            printf("\nA potencia é: %.2f, do Motor\n",lista[x].potencia);
            break;
        }
    }
    return 0;
}

int calPotencia (medido *lista, char *potMax, float *pot_max)
{
    int x, z;
    for(x=0; x<tam; x++)
    {
        lista[x].potencia = lista[x].tensao*lista[x].corrent;
    }
    for (z=0; z<tam; z++)
    {
        if (lista[z].potencia>lista[z+1].potencia)
        {
            *pot_max = lista[z].potencia;
        }
    }
    switch (z)
    {
    case 0:
        strcpy(potMax,"Refrigerador");
        printf("\nA potencia maxima é: %.2f, do equipemento Lampada\n",pot_max);
        break;
    case 1:
        printf("\nA potencia maxima é: %.2f, do equipemento Refrigerador\n",pot_max);
        break;
    case 2:
        printf("\nA potencia maxima é: %.2f, do equipemento Forno\n",pot_max);
        break;
    case 3:
        printf("\nA potencia maxima é: %.2f, do equipemento Chuveiro\n",pot_max);
        break;
    case 4:
        printf("\nA potencia maxima é: %.2f, do equipemento Computador\n",pot_max);
        break;
    case 5:
        printf("\nA potencia maxima é: %.2f, do equipemento Freezer\n",pot_max);
        break;
    case 6:
        printf("\nA potencia maxima é: %.2f, do equipemento Notebook\n",pot_max);
        break;
    case 7:
        printf("\nA potencia maxima é: %.2f, do equipemento Motor\n",pot_max);
        break;
    }
    return 0;
}

int ordena( medido *lista)
{
    int i,j;
    medido aux;
    for(i=tam-1; i>=1; i--)
    {
        for(j=0; j<i; j++)
        {
            if(lista[j].potencia > lista[j+1].potencia)
            {
                aux = (lista[j]);
                lista[j]=lista[j+1];
                lista[j+1]=aux;
            }
        }
    }
    return 0;
}
