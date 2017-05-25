#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main()
{
    setlocale(LC_CTYPE,"portuguese");
    FILE *fp;
    int n, f;
    char str[80];

    fp = fopen("TESTE1.txt", "r");/// R->leitura; W->Escrita; A->Anexo
    if (fp == NULL){
        printf("Erro ao abrir o arquivo \n");
        exit(1);
    }
    while(1){
        n = fscanf(fp,"%d %s", &f, str);
        if (n==EOF){
            break;
        }
        printf("Time: %s Fundação: %d\n", str, f);
    }
    fclose(fp);
    return 0;
}

/*
int main()
{
    setlocale(LC_CTYPE,"portuguese");
    FILE *fp;
    int ch, conta=0;

    fp = fopen("TESTE1.txt", "w");/// R->leitura; W->Escrita; A->Anexo
    if (fp == NULL){
        printf("Erro ao abrir o arquivo \n");
        exit(1);
    }
    fprintf(fp, "%d %s\n",2001, "Chapecoense");
    fprintf(fp, "%d %s\n",1921, "Figuerense ");
    fprintf(fp, "%d %s\n",1923, "Avai");
    fclose(fp);
    return 0;
}*/




/*
int main()
{
    setlocale(LC_CTYPE,"portuguese");
    FILE *fp;
    int ch, conta=0;

    fp = fopen("TESTE.txt", "r");/// R->leitura; W->Escrita; A->Anexo
    if (fp == NULL){
        printf("Erro ao abrir o arquivo \n");
        exit(1);
    }
    printf("Arquivo Abero com sucesso.\n");

    while(1){
        ch = fgetc(fp);
        if (ch == EOF){
            break;
        }
        printf("%c",ch);
        conta++;
    }
    fclose(fp);
    printf("Num. de caracteres lidos: %d",conta);
    return 0;
}
*/
