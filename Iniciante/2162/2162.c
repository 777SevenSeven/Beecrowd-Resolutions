#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int anterior;
    scanf("%d", &anterior);

    // 1 = subida
    // -1 = descida
    // 0 = ainda não existe direção
    int direcao = 0;

    int valido = 1;

    for (int i = 1; i < n; i++) {

        int atual;
        scanf("%d", &atual);

        if (atual == anterior) {
            valido = 0;
        }
        else {

            int novaDirecao;

            if (atual > anterior) {
                novaDirecao = 1;
            }
            else {
                novaDirecao = -1;
            }

            // Se a direção se repetiu, não houve alternância
            if (direcao == novaDirecao) {
                valido = 0;
            }

            direcao = novaDirecao;
        }

        anterior = atual;
    }

    if (valido) {
        printf("1\n");
    }
    else {
        printf("0\n");
    }

    return 0;
}