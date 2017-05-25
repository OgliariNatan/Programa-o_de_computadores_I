#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE,"portuguese");
    int col=0, lin=0, n, temp=1;
    printf("Digite um número\n");
        scanf("%i",&n);

     for(col=0;col<n;col++){
            for(lin=0;lin<=col;lin++){
                printf(" %d",temp);
                temp++;
            }
         printf("\n");
     }
    return 0;
}
