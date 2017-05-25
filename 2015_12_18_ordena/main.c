#include <stdio.h>
#include <stdlib.h>

void ordena (int vector[],int tam1);


int main()
{
    int vector [10] = {414,215,53,45,46465,4,744,8464,9,6610};
    int r=0,tam = 10;


    ordena (vector,tam);

     for(r=0;r<10;++r){
        printf("%d\n",vector[r]);
 }
    //printf("Hello world!\n");
    return 0;
}

void ordena (int vector[],int tam1){
int com=0, j=0, i=0;

  for(i=tam1-1;i>=1;i--) {
    for(j=0;j<i;j++) {
      if(vector[j]>vector[j+1]) {
        com = vector[j];
        vector[j] = vector[j+1];
        vector[j+1] = com;
        }
      }
    }


}

/* int main(void){

  int vector[10];
  int tam=10, com, i=0, j=0, r=0, t=0;

for(t=0;t<10;t++){
    printf("Digite o valor do vetor %d\n",t+1);
    scanf("%d",&vector[t]);
  }


}*/
