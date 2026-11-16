/*
 * Beecrowd | 1044 - Múltiplos
 * Categoria: Iniciante | Nível 2 | Assunto: Seleção
 * Link: https://judge.beecrowd.com/pt/problems/view/1044
 */

#include <stdio.h>



int main() {

    int A = 0, B = 0;

    scanf("%d %d", &A, &B);



    if (A % B == 0 || B % A == 0) {

        puts("Sao Multiplos");

    } else {

        puts("Nao sao Multiplos");

    }

    return 0;

}