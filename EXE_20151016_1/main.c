#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE,"portuguese");

    int x=10.0, y=2.0, z=6.0;
    float a,b,c,d,e,f,g,h;

    a=x*y+z;
    b=x*(y+z);
    c=x%y;
    d=x%z;
    e=8%y;
    f=9%y;
    g=x/y;
    h=(x-y)*z-y;

    printf("O valor de A é: %.2f\n",a);
    printf("O valor de B é: %.2f\n",b);
    printf("O valor de C é: %.2f\n",c);
    printf("O valor de D é: %.2f\n",d);
    printf("O valor de E é: %.2f\n",e);
    printf("O valor de F é: %.2f\n",f);
    printf("O valor de G é: %.2f\n",g);
    printf("O valor de H é: %.2f\n",h);


    return 0;
}
