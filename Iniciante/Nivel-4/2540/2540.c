/*
 * Beecrowd | 2540 - Impeachment do Líder
 * Categoria: Iniciante | Nível 4 | Assunto: Iniciante
 * Link: https://judge.beecrowd.com/pt/problems/view/2540
 */

#include <stdio.h>



int main() {

    int N, voto;



    while (scanf("%d", &N) != EOF) {

        int votosAfavor = 0;



        for (int i = 0; i < N; i++) {

            scanf("%d", &voto);

            if (voto == 1) {

                votosAfavor++;

            }

        }



        if (votosAfavor * 3 >= N * 2) {

            printf("impeachment\n");

        } else {

            printf("acusacao arquivada\n");

        }

    }



    return 0;

}

