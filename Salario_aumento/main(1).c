#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>


int main()
{
    setlocale(LC_CTYPE,"portuguese");
    float salario;
    int x;


    fflush(stdin);
    printf("Digite um o valor do seu salario\n");
    fflush(stdin);/// limpa o buffer geralmente usado no scanf;
    scanf("%f",&salario);




    printf("\n");

    switch(salario>1500)
    {
        case (0):
            //salario
            printf("seu amaneto será de 15%%\n");
            break;
        case 1:
            printf("seu amaneto será de 12%%\n");
            break;
        case 2:
            printf("seu amaneto será de 10%%\n");
            break;
        case 5:
            printf("seu amaneto será de 7%%\n");
            break;
        default:
            printf("seu amaneto será de 5%%\n");
    }


    return 0;
}
