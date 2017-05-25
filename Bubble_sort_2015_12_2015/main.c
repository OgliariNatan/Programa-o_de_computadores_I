#include <stdio.h>
#include <stdlib.h>

 int main(void){

  int vector[10];
  int tam=10, com, i=0, j=0, r=0, t=0;

  for(t=0;t<10;t++){
    printf("Digite o valor do vetor %d\n",t+1);
    scanf("%d",&vector[t]);
  }

  for(i=tam-1;i>=1;i--) {
    for(j=0;j<i;j++) {
      if(vector[j]>vector[j+1]) {
        com = vector[j];
        vector[j] = vector[j+1];
        vector[j+1] = com;
        }
      }
    }
  for(r=0;r<10;++r){
    printf("%d\n",vector[r]);
 }
}
