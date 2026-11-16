#include <stdio.h>
#define TAM 10

int main () {
    int i = 1, vetor[TAM], j = 1;
    
    //Entrada de Dados e Processamento de Dados
    for(i = 0; i <= 9; i++) {
        scanf("%d", &vetor[i]);
        if(vetor[i] <= 0) {
            vetor[i] = 1;
        }
    }
    
    //Saída de Dados
    for(j = 0; j <= 9; j++) {
        printf("X[%d] = %d\n", j, vetor[j]);
    }
    return 0;
}