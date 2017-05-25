#include <stdio.h>
void swap (int *i, int *j) {
int temp;
temp = *i;
*i = *j;
*j = temp;
}
int main () {
int a, b;
a = 5;
b = 10;
printf ("\n\nValem a=%d, b=%d\n", a, b);
swap (&a, &b);
printf ("\n\nAgora, valem a=%d, b=%d\n", a, b);
return 0;
}
