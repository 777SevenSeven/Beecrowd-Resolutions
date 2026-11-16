/*
 * Beecrowd | 3076 - Exercício de História
 * Categoria: Iniciante | Nível 4 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/3076
 */

#include <stdio.h>



int main() {

    long long N;



    // Lê até EOF

    while (scanf("%lld", &N) == 1) {

        printf("%lld\n", (N - 1) / 100 + 1);

    }



    return 0;

}

