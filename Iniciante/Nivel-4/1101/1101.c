/*
 * Beecrowd | 1101 - Sequência de Números e Soma
 * Categoria: Iniciante | Nível 4 | Assunto: Repetição
 * Link: https://judge.beecrowd.com/pt/problems/view/1101
 */

#include <stdio.h>



int main() {

    int M, N;



    do {

        scanf("%d %d", &M, &N);



        if (M <= 0 || N <= 0) {

            break;

        }



        int soma = 0;



        if (M > N) {

            int temp = M;

            M = N;

            N = temp;

        }



        for (int i = M; i <= N; i++) {

            printf("%d ", i);

            soma += i;

        }



        printf("Sum=%d\n", soma);



    } while (1);



    return 0;

}