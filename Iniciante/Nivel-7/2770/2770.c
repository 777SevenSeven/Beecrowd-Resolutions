/*
 * Beecrowd | 2770 - Tamanho da Placa
 * Categoria: Iniciante | Nível 7 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2770
 */



#include <stdio.h>



int main() {

    int X, Y, M;



    while (scanf("%d %d %d", &X, &Y, &M) == 3) {

        for (int i = 0; i < M; i++) {

            int Xi, Yi;

            scanf("%d %d", &Xi, &Yi);



            if ((Xi <= X && Yi <= Y) ||

                (Xi <= Y && Yi <= X)) {

                printf("Sim\n");

            } else {

                printf("Nao\n");

            }

        }

    }



    return 0;

}

