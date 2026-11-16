#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    // Se forem iguais, retorna esse valor (trio)
    // Se forem diferentes, retorna o maior (dupla mais forte)
    int maiorChanceGanhar = (A == B) ? A : (A > B ? A : B);

    printf("%d\n", maiorChanceGanhar);

    return 0;
}
