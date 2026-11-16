/*
 * Beecrowd | 2715 - Dividindo os Trabalhos I
 * Categoria: Iniciante | Nível 7
 * Link: https://judge.beecrowd.com/pt/problems/view/2715
 */

#include <stdio.h>

#include <stdlib.h>

#include <limits.h>



int main() {

    int N;



    while (scanf("%d", &N) == 1) {

        long long *a = (long long*) malloc(N * sizeof(long long));

        if (!a) return 1; // falha na alocação



        long long total = 0;

        for (int i = 0; i < N; i++) {

            scanf("%lld", &a[i]);

            total += a[i];

        }



        long long somaRangel = 0;

        long long melhor = LLONG_MAX;



        for (int i = 0; i < N; i++) {

            somaRangel += a[i];

            long long somaGugu = total - somaRangel;

            long long diferenca = llabs(somaRangel - somaGugu);



            if (diferenca < melhor) {

                melhor = diferenca;

            }

        }



        printf("%lld\n", melhor);



        free(a);

    }



    return 0;

}

