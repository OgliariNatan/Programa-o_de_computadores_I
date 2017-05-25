#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main()
{
    setlocale(LC_CTYPE,"portuguese");
    int nota1, nota2, nota3, nota4;
    float nf;
    printf("Digite as 4 Notas\n");
        fflush(stdin);
        scanf("%d %d %d %d",&nota1, &nota2, &nota3, &nota4);

    nf=(nota1+nota2+nota3+nota4)/4.0;
    printf("A nota final é: %.1f",nf);


//    printf("Olá mundo\n");
    return 0;
}
