#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>
int main()
{
    setlocale(LC_CTYPE,"portuguese");
    ///Escrita
    FILE *fp;
    int i, n;
    int vetint[100];
    char nomearq[15];
    printf("Digite o nome do aquivo: \n");///TESTE
    scanf("%s",nomearq);
    strcat (nomearq,".dat");
    fp=fopen(nomearq,"wb");
    if (fp==NULL){
        printf("Erro\n");
        return 0;
    }
   printf("Digite o n° de elementos do vetor:\n");
   scanf("%d",&n);

   for(i=0; i<n; i++){
        printf("Digite o elemento do vetor %d:\n",i+1);
        scanf("%d",&vetint[i]);
   }
   fwrite(vetint,sizeof(int),n,fp);
   if (fclose(fp)!=0){
        printf("Erro\n");
   }


    return 0;
}
