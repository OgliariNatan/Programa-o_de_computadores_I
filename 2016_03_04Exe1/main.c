#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

///Decima quarta parte

const int TAM = 100;

void WriteTexto(char *nomeArq);
void readTexto (char *nomeArq, int *vet);
void WriteBinario (char *nomeArq);
 /*
 struct test{
    int a;
    char b;
    char c;
    char f;
    int d;

 }ttt;*/

int main()
{
    //printf("%d",sizeof(ttt));
    setlocale(LC_CTYPE,"portuguese");
    char nomeArq[20];
    printf("\nDigite o nome do arquivo:\t");
    fflush(stdin);
    gets(nomeArq);
    strcat(nomeArq,".txt");

    WriteTexto(nomeArq);

    return 0;
}

void WriteTexto(char *nomeArq){
    FILE *fp;
    int n;
    fp = fopen(nomeArq,"w");
    if (fp==NULL){
        printf("Erro ao fechar o arquivo\n");
        exit(1);
    }
    for(n=0;n<TAM;n++)
      fprintf(fp, "%d",n);
    fclose(fp);
}

void readTexto (char *nomeArq, int *vet){



}
