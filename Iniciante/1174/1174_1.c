#include <stdio.h>

int main()
{
    float numero, vetor[100];
    int j,k, contador=-1;
    for (j=0; j<100; j++){
    scanf("%f",&vetor[j]);
    }
    for(k=0;k<100;k++){
    contador++;
    if(vetor[k]<=10){
    printf("A[%d] = %.1f\n",contador,vetor[k]);
    }
     }
    return 0;
}