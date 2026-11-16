/*
 * Beecrowd | 2534 - Exame Geral
 * Categoria: Iniciante | Nível 2 | Assunto: Ordenação
 * Link: https://judge.beecrowd.com/pt/problems/view/2534
 */

#include <stdio.h>



int main() {



    int n, q;



    while (scanf("%d %d", &n, &q) != EOF) {



        int notas[100];



        for (int i = 0; i < n; i++) {

            scanf("%d", &notas[i]);

        }



        // Ordena do maior para o menor

        for (int i = 0; i < n - 1; i++) {

            for (int j = 0; j < n - 1 - i; j++) {



                if (notas[j] < notas[j + 1]) {



                    int temp = notas[j];

                    notas[j] = notas[j + 1];

                    notas[j + 1] = temp;

                }

            }

        }



        for (int i = 0; i < q; i++) {



            int posicao;

            scanf("%d", &posicao);



            printf("%d\n", notas[posicao - 1]);

        }

    }



    return 0;

}