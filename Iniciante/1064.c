#include <stdio.h>

int main() {
    int numerosPositivos = 0;
    float soma = 0;

    for (int cont = 0; cont < 6; cont++) {
        float numero;
        scanf("%f", &numero);
        if (numero > 0) {
            soma += numero;
            numerosPositivos++;
        }
    }

    printf("%d valores positivos\n", numerosPositivos);
    
    if (numerosPositivos > 0) {
        float media = soma / numerosPositivos;
        printf("%.1f\n", media);
    } 
    return 0;
}