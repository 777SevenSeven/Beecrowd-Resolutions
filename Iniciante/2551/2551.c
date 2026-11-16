#include <stdio.h>

int main() {

    int n;

    while (scanf("%d", &n) != EOF) {

        int tempoRecorde = 0;
        int distanciaRecorde = 0;

        for (int i = 1; i <= n; i++) {

            int tempo, distancia;

            scanf("%d %d", &tempo, &distancia);

            if (i == 1) {

                printf("%d\n", i);

                tempoRecorde = tempo;
                distanciaRecorde = distancia;
            }
            else if (distancia * tempoRecorde > distanciaRecorde * tempo) {

                printf("%d\n", i);

                tempoRecorde = tempo;
                distanciaRecorde = distancia;
            }
        }
    }

    return 0;
}