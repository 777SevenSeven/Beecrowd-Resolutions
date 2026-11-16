/*
 * Beecrowd | 1973 - Jornada nas Estrelas
 * Categoria: Iniciante | Nível 7 | Assunto: Simulação
 * Link: https://judge.beecrowd.com/pt/problems/view/1973
 */

#include <stdio.h>

#include <stdlib.h>

#include <stdbool.h>



int main() {

    int N;

    scanf("%d", &N);



    long long *carneiros = (long long*) malloc(N * sizeof(long long));

    bool *visitada = (bool*) calloc(N, sizeof(bool)); // inicia com false



    long long total = 0;

    for (int i = 0; i < N; i++) {

        scanf("%lld", &carneiros[i]);

        total += carneiros[i];

    }



    int pos = 0;

    long long atacadas = 0;



    while (pos >= 0 && pos < N) {

        // Conta a estrela apenas na primeira vez que é visitada

        if (!visitada[pos]) {

            visitada[pos] = true;

            atacadas++;

        }



        // Guarda a quantidade ANTES do roubo

        long long antes = carneiros[pos];



        // Rouba 1 se houver carneiro

        if (carneiros[pos] > 0) {

            carneiros[pos]--;

            total--;

        }



        // Direção depende da quantidade ANTES do roubo

        if (antes % 2 == 1)

            pos++;

        else

            pos--;

    }



    printf("%lld %lld\n", atacadas, total);



    free(carneiros);

    free(visitada);



    return 0;

}

