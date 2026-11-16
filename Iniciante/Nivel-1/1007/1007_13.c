/*
 * Beecrowd | 1007 - Diferença
 * Categoria: Iniciante | Nível 1 | Assunto: Sequencial
 * Link: https://judge.beecrowd.com/pt/problems/view/1007
 */

#include <stdio.h>

 

int main() {

    int A = 0, B = 0, C = 0, D = 0, diferenca = 0;

    scanf("%d %d %d %d", &A, &B, &C, &D);

    

    diferenca = (A * B) - (C * D);

    

    printf("DIFERENCA = %d\n", diferenca);

    return 0;

}