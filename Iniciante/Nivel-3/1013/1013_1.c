/*
 * Beecrowd | 1013 - O Maior
 * Categoria: Iniciante | Nível 3 | Assunto: Sequencial
 * Link: https://judge.beecrowd.com/pt/problems/view/1013
 */

#include <stdio.h>



int main() {

    int a, b, c, maior;

    scanf("%d %d %d", &a, &b, &c);

    maior = (a + b + abs(a - b)) / 2;

    maior = (maior + c + abs(maior - c)) / 2;

    printf("%d eh o maior\n", maior);



    return 0;}