#include <stdio.h>

int main() {
    int casosTeste, valor;
    int gasto = 0, verba = 0;
    char GastoVerba;

    scanf("%d", &casosTeste);

    for (int i = 0; i < casosTeste; i++) {
        scanf(" %c %d", &GastoVerba, &valor);

        if (GastoVerba == 'G') {
            gasto += valor;
        } else {
            verba += valor;
        }
    }

    if (gasto > verba) {
        printf("NAO VAI TER CORTE, VAI TER LUTA!\n");
    } else {
        printf("A greve vai parar.\n");
    }

    return 0;
}
