/*
 * Beecrowd | 2968 - Hora da Corrida
 * Categoria: Iniciante | Nível 5 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2968
 */

#include <stdio.h>



int main() {

    long long V, N;

    if (scanf("%lld %lld", &V, &N) != 2) {

        return 0;

    }



    long long total = V * N;



    for (int p = 10; p <= 90; p += 10) {

        long long resposta = (total * p + 99) / 100; // arredonda para cima



        printf("%lld", resposta);



        if (p < 90)

            printf(" ");

    }



    printf("\n");



    return 0;

}

