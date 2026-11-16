#include <stdio.h>
#define TAM 10
int main () {
    int numero = 0, X[TAM], i = 0, j = 0, k = 0;
    
    //Entrada de Dados
    for(i = 0; i < TAM; i++) {
        scanf("%d",&X[i]);
    }
    
    //Seleção dos Dados
    for(j = 0; j < TAM; j++) {
    if(X[j] <= 0) {
        X[j] = 1;
        }
    }
    
    //Exposição dos Dados
    for(k = 0; k < TAM; k++) {
        printf("X[%d] = %d\n", k, X[k]);
    }
}
    