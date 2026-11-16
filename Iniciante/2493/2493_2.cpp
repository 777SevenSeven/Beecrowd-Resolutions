#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int T;

    while (scanf("%d", &T) == 1) {
        int *x = (int*) malloc(T * sizeof(int));
        int *y = (int*) malloc(T * sizeof(int));
        int *z = (int*) malloc(T * sizeof(int));

        for (int i = 0; i < T; i++) {
            char igual;
            scanf("%d %d %c %d", &x[i], &y[i], &igual, &z[i]);
        }

        char **errados = (char**) malloc(T * sizeof(char*));
        int qtdErrados = 0;

        for (int i = 0; i < T; i++) {
            char nome[50];
            int E;
            char resposta;

            scanf("%s %d %c", nome, &E, &resposta);
            int indice = E - 1;

            bool soma = (x[indice] + y[indice] == z[indice]);
            bool sub  = (x[indice] - y[indice] == z[indice]);
            bool mult = (x[indice] * y[indice] == z[indice]);

            bool correta;
            if (resposta == '+')
                correta = soma;
            else if (resposta == '-')
                correta = sub;
            else if (resposta == '*')
                correta = mult;
            else
                correta = !soma && !sub && !mult;

            if (!correta) {
                errados[qtdErrados] = (char*) malloc((strlen(nome) + 1) * sizeof(char));
                strcpy(errados[qtdErrados], nome);
                qtdErrados++;
            }
        }

        if (qtdErrados == 0) {
            printf("You Shall All Pass!\n");
        } else if (qtdErrados == T) {
            printf("None Shall Pass!\n");
        } else {
            // Ordenar nomes errados em ordem alfabética
            for (int i = 0; i < qtdErrados - 1; i++) {
                for (int j = i + 1; j < qtdErrados; j++) {
                    if (strcmp(errados[i], errados[j]) > 0) {
                        char *tmp = errados[i];
                        errados[i] = errados[j];
                        errados[j] = tmp;
                    }
                }
            }

            for (int i = 0; i < qtdErrados; i++) {
                if (i > 0) printf(" ");
                printf("%s", errados[i]);
            }
            printf("\n");
        }

        // Liberar memória
        for (int i = 0; i < qtdErrados; i++) {
            free(errados[i]);
        }
        free(errados);
        free(x);
        free(y);
        free(z);
    }

    return 0;
}
