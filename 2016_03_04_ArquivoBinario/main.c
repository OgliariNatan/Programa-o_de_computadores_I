#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>
int main()
{
    setlocale(LC_CTYPE,"portuguese");
    ///leitura
    FILE *fp;
    int i ,n , valor;
    char nomearq[15];
    printf("Digite o nome do aquivo: \n");///TESTE
    scanf("%s",nomearq);
    strcat (nomearq,".dat");
    fp=fopen(nomearq,"rb");
    if (fp==NULL){
        printf("Erro\n");
        return 0;
    }

    printf("Digite o n° do elemento desejado: entre 1 e %d\n",SEEK_END);
    scanf("%d",&n);
    printf("\n aaaaa  %d  aaaaaa \n", SEEK_END);/// imprimi o numero de posições
    //if ((fseek(fp, (n-1)*sizeof(int),SEEK_SET) == 0) && fread(&valor, sizeof(int), 1, fp)>0 )
    if (fseek(fp, (n-1)*sizeof(int),SEEK_SET) == 0)
            if(fread(&valor, sizeof(int), 1, fp)>0)
                printf("%d", valor);



    return 0;
}
