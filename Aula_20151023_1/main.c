#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE,"portuguese");
    int num1, num2;

    printf("Digite 2 n�meros: \n");
        scanf("%d %d",&num1, &num2);
    printf("num1 �: %d \n \bnum2 �: %d \n",num1,num2);

    if(num1>0){
      printf("%d Este n�mero � maior que zero",num1);
    }
    else if (num1==0)
        printf("%d O numero � igual a Zero",num1);
    else
        printf("%d Este numero � menor que zero",num1);


    return 0;
}
