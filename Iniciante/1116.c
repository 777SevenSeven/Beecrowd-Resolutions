#include <stdio.h>

int main() {
    int quantidadeDeVezes = 0, cont = 1, numeroA = 0, numeroB = 0;
    
    // Entrada de Dados
    scanf("%d", &quantidadeDeVezes);

    // Processamento de Dados
    for (cont = 1; cont <= quantidadeDeVezes; cont++) {
        scanf("%d %d", &numeroA, &numeroB);
        
        if (numeroB == 0) {
            printf("divisao impossivel\n");
        } else {
            double divisao = (double)numeroA / numeroB;
            printf("%.1f\n", divisao);
        }
    }

    return 0;
}