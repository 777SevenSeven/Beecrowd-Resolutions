/*
 * Beecrowd | 2786 - Piso da Escola
 * Categoria: Iniciante | Nível 1 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2786
 */

#include <stdio.h>



int main() {



    int L, C;



    scanf("%d", &L);

    scanf("%d", &C);



    int tipo1 = 2 * L * C - L - C + 1;

    int tipo2 = 2 * (L + C - 2);



    printf("%d\n", tipo1);

    printf("%d\n", tipo2);



    return 0;

}