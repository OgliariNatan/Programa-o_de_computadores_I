#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>


int main()
{
    setlocale(LC_CTYPE,"portuguese");
    char nome[6];

        int x=10,y;
        if(x>9)
            y=50;
        else
            y=150;
        printf("O valor de Y é %d\n",y);

        y=x>9?10:190;
        printf("\n%d",y);




   /*

    fflush(stdin);
    printf("Digite o seu nome\n");
    fflush(stdin);/// limpa o buffer geralmente usado no scanf;
    gets(nome);


    printf("seu nome é: %s\n",nome);

      printf("Seu nome tem %d carectres\n", strlen(nome));*/

    return 0;
}
