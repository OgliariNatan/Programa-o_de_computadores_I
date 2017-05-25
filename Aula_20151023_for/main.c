#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE,"portuguese");
    int x, j;

   for (x=0;x<=10;x++){
        printf("X=\t%d\n",x);

   }

    return 0;
}
