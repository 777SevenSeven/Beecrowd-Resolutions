#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int anterior;
    scanf("%d", &anterior);

    if (n == 1) {
        printf("1\n");
        return 0;
    }

    int atual;
    scanf("%d", &atual);

    int diferenca = atual - anterior;
    int escadinhas = 1;

    anterior = atual;

    for (int i = 2; i < n; i++) {

        scanf("%d", &atual);

        int novaDiferenca = atual - anterior;

        if (novaDiferenca != diferenca) {
            escadinhas++;
            diferenca = novaDiferenca;
        }

        anterior = atual;
    }

    printf("%d\n", escadinhas);

    return 0;
}