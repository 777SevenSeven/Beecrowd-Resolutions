#include <stdio.h>

int main() {

    int n;

    while (scanf("%d", &n) != EOF) {

        int pacote[1000];
        int tempo[1000];

        for (int i = 0; i < n; i++) {
            scanf("%d", &pacote[i]);
        }

        for (int i = 0; i < n; i++) {
            scanf("%d", &tempo[i]);
        }

        long long total = 0;

        for (int i = 0; i < n - 1; i++) {

            for (int j = 0; j < n - 1 - i; j++) {

                if (pacote[j] > pacote[j + 1]) {

                    total += tempo[j] + tempo[j + 1];

                    int aux = pacote[j];
                    pacote[j] = pacote[j + 1];
                    pacote[j + 1] = aux;

                    aux = tempo[j];
                    tempo[j] = tempo[j + 1];
                    tempo[j + 1] = aux;
                }
            }
        }

        printf("%lld\n", total);
    }

    return 0;
}