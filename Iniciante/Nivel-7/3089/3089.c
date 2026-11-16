/*
 * Beecrowd | 3089 - Presentes de Natal
 * Categoria: Iniciante | Nível 7 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/3089
 */

#include <stdio.h>

#include <stdlib.h>

#include <limits.h>



int main() {

    int n;



    while (scanf("%d", &n) && n != 0) {

        long long *presentes = (long long*) malloc(2 * n * sizeof(long long));

        if (!presentes) return 1; // falha na alocação



        for (int i = 0; i < 2 * n; i++) {

            scanf("%lld", &presentes[i]);

        }



        long long maior = 0;

        long long menor = LLONG_MAX;



        for (int i = 0; i < n; i++) {

            long long soma = presentes[i] + presentes[2 * n - 1 - i];



            if (soma > maior) maior = soma;

            if (soma < menor) menor = soma;

        }



        printf("%lld %lld\n", maior, menor);



        free(presentes);

    }



    return 0;

}

