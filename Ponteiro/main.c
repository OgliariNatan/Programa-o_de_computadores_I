#include <stdio.h>
#include <stdlib.h>

int main()
{

    char l1,l2, *ptr1, *ptr2;

    l1=65;
    l2='B';


    /*
    printf("L1 = %c\n\bL2 = %c\n",l1,l2);

    ptr1 = &l1;
    printf("Edereco de L1 = %p\n\bApontado por ptr1 %p\n",l1 ,*ptr1);

    *ptr1 = 67;
    printf("Valor do ptr1 = %c\n",*ptr1);
    */

    ptr1 = &l1;
    ptr2 = ptr1;
    *ptr2 = 'C';//grava 'C' na memoria apontada por *ptr2
    ptr2 = &l2;
    ptr1 = ptr2;
    l2 = 'G';
    *ptr1 = 'H';





    return 0;
}
