#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

const int TAM = 11;
const char nomeArq[20] = "logon.log";

struct teste
{

    char nome[15];
    int  hora;
    int minutos;
    int segundos;
};
void readTexto (struct teste *lista);
void MostraUsuarios(struct teste *lista);
void mostraAposHora (struct teste *lista);
void mostraAcessoUsuario (struct teste *lista);

int main()
{
    setlocale(LC_CTYPE,"portuguese");
    unsigned int menu;
    struct teste lista[TAM];
    readTexto(lista);
    do
    {
        printf("<1> Listar Usuarios\n<2> Mostrar apartir de uma determinada hora\n<3> Mostrar acesso de um usuario\n<4> Sair\n");
        scanf("%d",&menu);
        switch (menu)
        {
        case 1:
            MostraUsuarios(lista);
            break;
        case 2:
            mostraAposHora(lista);
            break;
        case 3:
            mostraAcessoUsuario(lista);
            break;
        }
    }
    while (!(menu==4));


    return 0;
}
void mostraAcessoUsuario (struct teste *lista)
{
    unsigned int v;
    char usuario[15];
    printf("Digite o nome do usuario\n");
    fflush(stdin);
    gets(usuario);

    for(v=0; v<TAM; v++)
    {
        if((strcmp(usuario,lista[v].nome))==0)
        {
            printf("O Usuario é: %s\t<%d:%d:%d>\n",lista[v].nome, lista[v].hora, lista[v].minutos, lista[v].segundos);
        }
    }
}
void mostraAposHora (struct teste *lista)
{
    int horas, minuto, segundo, c;
    printf("Digite a hora a ser mostrado\n");
    fflush(stdin);
    scanf("%d",&horas);
    printf("Digite o minuto a ser mostrado\n");
    fflush(stdin);
    scanf("%d",&minuto);
    printf("Digite o segundo a ser mostrado\n");
    fflush(stdin);
    scanf("%d",&segundo);

    for (c=0; c<TAM; c++)
    {
        if ((horas<lista[c].hora)&&(horas<24))
        {
            //if (minuto<lista[c].minutos){
            //if (segundo<lista[c].minutos){
            printf("O usuario é: %s\t<%d:%d:%d>\n",lista[c].nome,lista[c].hora, lista[c].minutos, lista[c].segundos);
            //}
            //}
        }
    }


}
void MostraUsuarios(struct teste *lista){
int x;

    for (x=0; x<TAM; x++){

    }

}

void readTexto (struct teste *lista)
{
    FILE *fp;

    fp = fopen(nomeArq,"r");
    if (fp == NULL)
    {
        printf("ERRO\n");
        exit(1);
    }
    while(1)
    {
        int j, x;
        for (j=0; j<TAM; j++)
        {
            x = fscanf(fp, "%s\t%d:%d:%d\n",lista[j].nome, &lista[j].hora, &lista[j].minutos, &lista[j].segundos);
        }
        if (x == EOF)
            break;
    }
    fclose(fp);
}
