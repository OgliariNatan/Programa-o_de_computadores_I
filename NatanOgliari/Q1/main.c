#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int troca_letra (char *str1, char letra_subistituida, char letra_subistituta);

int main()
{
    setlocale(LC_CTYPE,"portuguese");
    char str1[50];
    char letra_subistituida[0], letra_subistituta[0];
    int x=0;
    printf("Seja bem vindo ao programa que subistitui lestras em uma string.\n");
    printf("Digite a string\n");
    fflush(stdin);
    gets(str1);
    ///printf("A string vale:\t %s\n",str1);///verificando a string

    printf("\nDigite a letra a ser subistituida:\t");
    fflush(stdin);///limpa o buffer
    gets(letra_subistituida);
    ///printf("\nA letra subistituida é:\t%s \n",letra_subistituida);

    printf("\nDigite a letra subistituta:\t");
    fflush(stdin);///limpa o buffer
    gets(letra_subistituta);
    ///printf("\nA letra subistituta é:\t%s\n",letra_subistituta);///informa a letra ao usuario


    x = troca_letra(str1,letra_subistituida,letra_subistituta);

    ///printf("\nA nova string vale:\t%s\n",str1);
    ///printf("\nO numero de letras subistituida foi de: <%d>",x);
    return 0;
}
int troca_letra (char *str1, char letra_subistituida, char letra_subistituta){
int x=0, y, z=0;

    printf("<%s>",letra_subistituida);
    for(y=0; y<z; y++){
       /// printf("<%s>\n",&str1[y]);
    }


return x;
}
