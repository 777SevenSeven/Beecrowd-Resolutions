#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    int H, M;
    int qt, i;
    
    char linha[4000000];
    char *token;
    
    double valores[100000];
    double soma, media;
    double soma_quadrados;

    while (scanf("%d %d ", &H, &M) != EOF) {

        fgets(linha, sizeof(linha), stdin);

        qt = 0;
        soma = 0.0;

        token = strtok(linha, " ");

        while (token != NULL) {
            valores[qt] = atof(token);
            soma += valores[qt];

            qt++;

            token = strtok(NULL, " ");
        }

        media = soma / qt;

        soma_quadrados = 0.0;

        for (i = 0; i < qt; i++) {
            soma_quadrados +=
                (valores[i] - media) *
                (valores[i] - media);
        }

        printf("%.5lf\n",
               sqrt(soma_quadrados / (qt - 1)));
    }

    return 0;
}