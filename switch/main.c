#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>


int main()
{
    setlocale(LC_CTYPE,"portuguese");
    char car;


    fflush(stdin);
    printf("Digite um Caracter\n");
    //fflush(stdin);/// limpa o buffer geralmente usado no scanf;
    //scanf("%s",&car);
    car=getchar();

    printf("\n");

    switch(car)
    {
        case 'N':
        case 'n':
            printf("N\n");
            break;
        case 'A':
        case 'a':
            printf("A\n");
            break;
        case 'T':
            printf("T\n");
            break;
        default:
            printf("default\n");
    }



/*
    fflush(stdin);
    printf("Digite um Caracter\n");
    fflush(stdin);/// limpa o buffer geralmente usado no scanf;
    scanf("%s",&car);

    printf("\n\n");

    switch(car)
    {
        case 'N':
            printf("N\n");
            break;
        case 'A':
            printf("A\n");
            break;
        case 'T':
            printf("T\n");
            break;
        default:
            printf("default\n");
    }
*/
    return 0;
}
