/*===============================================
===========Autor: Natan Ogliari==================
===============================================*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>
struct revendaCarro
{
    char fabricante[20];
    char modelo [10];
    int ano;
    float preco;
};
typedef struct revendaCarro carro;
void ordena (carro *lista,int tam);
void mostraTela (carro *lista,int tam);
int incluir(carro *lista, int tam);
int excluir (carro *lista, int tam);
void mostraAno (carro *lista, int tam);
int main()
{
    setlocale(LC_CTYPE,"portuguese");
    printf("Olá seja bem vindo ao sistema BG veiculos\n");
    unsigned int tam = 4;
    carro lista[tam];
    ///cadastra os veiculos inicias
    unsigned int x=0;
    for (x=0; x<tam; x++)
    {
        printf("\n%d. Digite o Fabricante do veiculo:\t",(x+1));
        fflush(stdin);
        gets(lista[x].fabricante);
        printf("\n%d. Digite o Modelo do veiculo:\t",(x+1));
        fflush(stdin);
        gets(lista[x].modelo);
        printf("\n%d. Digite o Ano do veiculo:\t",(x+1));
        fflush(stdin);
        scanf("%d",&lista[x].ano);
        printf("\n%d. Digite o Preço do veiculo[R$]:\t",(x+1));
        fflush(stdin);
        scanf("%f",&lista[x].preco);
    }
    /// Menu
    unsigned int menu;
    do
    {
        printf("\n<1> Incluir veiculo no estoque\n<2> Excluir veiculo vendido\n<3> Listar Todos os veiculos por ano de fabricação\n<4> Expecifique um ano a ser mostrado:\n<5> Sair\n");
        fflush(stdin);
        scanf("%d",&menu);
        switch(menu)
        {
        case 1:
            tam = incluir(lista,tam);
            break;
        case 2:
            mostraTela (lista,tam);
            tam = excluir(lista,tam);
            break;
        case 3:
            mostraTela (lista,tam);
            break;
        case 4:
            mostraAno (lista,tam);
            break;
        }
    }
    while (!(menu==5));
    return 06;
}///Fim da função principal
/// Inicio da função ordena por ordem decrecente
void ordena (carro lista[],int tam)
{
    int i,j;
    carro aux;
    for(i=tam-1; i>=1; i--)
    {
        for(j=0; j<i; j++)
        {
            if(lista[j].ano > lista[j+1].ano)
            {
                aux = (lista[j]);
                lista[j]=lista[j+1];
                lista[j+1]=aux;
            }
        }
    }
}
/// Imprimi os resultados na tela por ordem de ano
void mostraTela (carro lista[], int tam)
{
    int o, x=1;
    if(tam==0)
    {
        printf("\nFabricante: %s\tModelo: %s\tAno: %d\tPreço[R$]: %.5f\n  ",lista[tam].fabricante,lista[tam].modelo,lista[tam].ano,lista[tam].preco);
    }
    else
    {
        for(o=0; o<tam; o++)
        {
            printf("\n<%d>\tFabricante: %s\tModelo: %s\tAno: %d\tPreço[R$]: %.5f\n  ",x,lista[o].fabricante,lista[o].modelo,lista[o].ano,lista[o].preco);
            x++;
        }
    }
}
///Inicia a função incluir veiculos novos
int incluir(carro lista[], int tam)
{
    setlocale(LC_CTYPE,"portuguese");
    printf("\nDigite o fabricante:\t");
    fflush(stdin);
    gets(lista[tam].fabricante);
    printf("\nDigite o modelo do veiculo:\t");
    fflush(stdin);
    gets(lista[tam].modelo);
    printf("\nDigite o Ano do veiculo:\t");
    fflush(stdin);
    scanf("%d",&lista[tam].ano);
    printf("\nDigite o Preço do veiculo[R$]:\t");
    fflush(stdin);
    scanf("%f",&lista[tam].preco);
    return ++tam;
}
///Inicia a função exclir veiculos
int excluir (carro lista[], int tam)
{
    setlocale(LC_CTYPE,"portuguese");
    carro aux;
    unsigned int menu;
    printf("Escolha o veiculo a ser excluido\n");
    fflush(stdin);
    scanf("%d",&menu);
    aux = lista[menu-1];
    lista[menu-1] = lista[tam-1];
    lista[tam-1] = aux;
    tam--;
    return tam;
}
///mostra um ano expecifico
void mostraAno (carro *lista, int tam)
{
    setlocale(LC_CTYPE,"portuguese");
    unsigned int menu, z;
    printf("\nDigite um ano a ser listado:\n");
    fflush(stdin);
    scanf("%d",&menu);
    for (z=0; z<tam; z++)
    {
        if(lista[z].ano==menu)
        {
            printf("\n%d  Fabricante: %s\tModelo: %s\tAno de fabricação: %d\tPreço[R$]:%.5f",(z+1),lista[z].fabricante,lista[z].modelo,lista[z].ano,lista[z].preco);
        }
    }
}
