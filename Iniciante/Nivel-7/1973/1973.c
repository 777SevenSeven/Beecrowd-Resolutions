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



    long long *carneiros = malloc(N * sizeof(long long));

    bool *visitada = calloc(N, sizeof(bool));



    long long total = 0;



    for (int i = 0; i < N; i++) {

        scanf("%lld", &carneiros[i]);

        total += carneiros[i];

    }



    int pos = 0;

    long long atacadas = 0;



    while (pos >= 0 && pos < N) {

        // Conta a estrela somente na primeira visita

        if (!visitada[pos]) {

            visitada[pos] = true;

            atacadas++;

        }



        // Guarda a quantidade antes do roubo

        long long antes = carneiros[pos];



        // Rouba um carneiro, se houver

        if (carneiros[pos] > 0) {

            carneiros[pos]--;

            total--;

        }



        // A direção depende da quantidade antes do roubo

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

