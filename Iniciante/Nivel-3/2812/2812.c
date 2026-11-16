/*
 * Beecrowd | 2812 - Laércio
 * Categoria: Iniciante | Nível 3 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2812
 */

#include <stdio.h>

#include <stdlib.h>



int compare(const void *a, const void *b) {

    return (*(int*)a - *(int*)b);

}



int main() {

    int N;

    while (scanf("%d", &N) != EOF) {

        while (N--) {

            int M;

            scanf("%d", &M);



            int impares[M];

            int qtd = 0;



            for (int i = 0; i < M; i++) {

                int x;

                scanf("%d", &x);

                if (x % 2 != 0) {

                    impares[qtd++] = x;

                }

            }



            qsort(impares, qtd, sizeof(int), compare);



            int esquerda = 0;

            int direita = qtd - 1;

            int primeiro = 1;



            while (esquerda <= direita) {

                // Maior disponível

                if (!primeiro) printf(" ");

                printf("%d", impares[direita]);

                direita--;

                primeiro = 0;



                // Menor disponível

                if (esquerda <= direita) {

                    printf(" %d", impares[esquerda]);

                    esquerda++;

                }

            }

            printf("\n");

        }

    }

    return 0;

}

