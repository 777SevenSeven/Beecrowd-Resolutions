/*
 * Beecrowd | 2235 - Andando no Tempo
 * Categoria: Iniciante | Nível 1 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2235
 */

#include <stdio.h>



int main() {



    int A, B, C;



    scanf("%d %d %d", &A, &B, &C);



    if (A == B || A == C || B == C ||

        A + B == C || A + C == B || B + C == A) {



        printf("S\n");



    } else {



        printf("N\n");

    }



    return 0;

}