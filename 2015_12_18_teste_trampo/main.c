#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(){
       char string[50],auxiliar[50], aux[50];
       int a,b;
       printf("Digite a frase que pretendes que invertida: ");
       gets(string);  //Armazena a frade na variável string
       b=strlen(string)-1;    //strlen calcula a quantidade de caracteres que tem a string
       for(a=0;string[a]!='\0';a++){        //Repete enquanto nao chegar ao final da string
       auxiliar[b]=string[a];
       b--;
       }
       auxiliar[a]='\0';      //Se nao colocar essa parte, o programa pode mostrar LIXO
       strcpy(string,auxiliar);    //Copia para a variável string o conteúdo da variável auxiliar
       printf("\n\nA frase inversa e:\n%s\n\n",string);


       aux[]=strcpy(auxiliar);



return 0;
}























/*
#define MAX 20

int main()
{

char nome[MAX], lt[MAX];
int i, y=0, tam;

printf("Entre com a frase: ");
gets(nome);

tam = strlen(nome);
for(i = tam-1; i >= 0; i--)
{
lt[y] = toupper(nome);
y++;
}

printf("\n");
printf(" Nova Frase: %s ", lt);

printf("\n\n");
return 0;
}
*/








/*
int main()
{
    char frase[100];
    int i,tamanho;

    printf("Informe uma frase\n\n");
    gets(frase);
    tamanho = strlen(frase);

    printf("\nFrase invertida:\n\n");
    for ( i = tamanho; i >= 0; i--)
    {
        printf ("%c",frase[i]);
    }
    printf("\n\n");
   // system ("pause");
    return 0;
}
*/
