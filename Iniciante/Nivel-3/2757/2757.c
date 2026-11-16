/*
 * Beecrowd | 2757 - Entrada e Saída de Números Inteiros
 * Categoria: Iniciante | Nível 3 | Assunto: Números Inteiros
 * Link: https://judge.beecrowd.com/pt/problems/view/2757
 */

#include <stdio.h>



int main() {

    int A, B, C;



    scanf("%d", &A);

    scanf("%d", &B);

    scanf("%d", &C);



    // Normal

    printf("A = %d, B = %d, C = %d\n", A, B, C);



    // Direita, largura 10

    printf("A = %10d, B = %10d, C = %10d\n", A, B, C);



    // Largura 10 com zeros

    printf("A = %010d, B = %010d, C = %010d\n", A, B, C);



    // Esquerda, largura 10

    printf("A = %-10d, B = %-10d, C = %-10d\n", A, B, C);



    return 0;

}

