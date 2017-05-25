#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE,"portuguese");
    int num1, num2;

    printf("Digite 2 números: \n");
        scanf("%d %d",&num1, &num2);
    printf("num1 é: %d \n \bnum2 é: %d \n",num1,num2);

    if(num1>0){
      printf("%d Este número é maior que zero",num1);
    }
    else if (num1==0)
        printf("%d O numero é igual a Zero",num1);
    else
        printf("%d Este numero é menor que zero",num1);


    return 0;
}
