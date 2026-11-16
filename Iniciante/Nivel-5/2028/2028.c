/*
 * Beecrowd | 2028 - Sequência de Sequência
 * Categoria: Iniciante | Nível 5 | Assunto: Universo imaginário
 * Link: https://judge.beecrowd.com/pt/problems/view/2028
 */

#include <stdio.h>



int main() {

    int N;

    int caso = 1;



    while (scanf("%d", &N) == 1) {

        long long quantidade = 1LL + (long long)N * (N + 1) / 2;



        printf("Caso %d: %lld ", caso, quantidade);



        if (quantidade == 1)

            printf("numero\n");

        else

            printf("numeros\n");



        // Imprime a sequência

        printf("0");



        for (int i = 1; i <= N; i++) {

            for (int j = 0; j < i; j++) {

                printf(" %d", i);

            }

        }



        printf("\n\n");



        caso++;

    }



    return 0;

}

