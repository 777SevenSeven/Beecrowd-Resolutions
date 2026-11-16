/*
 * Beecrowd | 2172 - Evento
 * Categoria: Iniciante | Nível 1 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2172
 */

#include <stdio.h>



int main() {

    long long X, M;



    while (scanf("%lld %lld", &X, &M) == 2) {

        if (X == 0 && M == 0)

            break;

        

        printf("%lld\n", X * M);

    }



    return 0;

}