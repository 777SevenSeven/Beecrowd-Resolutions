/*
 * Beecrowd | 2031 - Pedra, Papel, Ataque Aéreo
 * Categoria: Iniciante | Nível 2
 * Link: https://judge.beecrowd.com/pt/problems/view/2031
 */

#include <stdio.h>

#include <string.h>



int main() {

    int t;

    char jogadorUm[20], jogadorDois[20];



    scanf("%d", &t);



    for (int i = 0; i < t; i++) {

        scanf("%s", jogadorUm);

        scanf("%s", jogadorDois);



        if (strcmp(jogadorUm, "ataque") == 0 && strcmp(jogadorDois, "ataque") == 0) {

            printf("Aniquilacao mutua\n");

        }

        else if (strcmp(jogadorUm, "ataque") == 0 && strcmp(jogadorDois, "pedra") == 0) {

            printf("Jogador 1 venceu\n");

        }

        else if (strcmp(jogadorUm, "pedra") == 0 && strcmp(jogadorDois, "ataque") == 0) {

            printf("Jogador 2 venceu\n");

        }

        else if (strcmp(jogadorUm, "ataque") == 0 && strcmp(jogadorDois, "papel") == 0) {

            printf("Jogador 1 venceu\n");

        }

        else if (strcmp(jogadorUm, "papel") == 0 && strcmp(jogadorDois, "ataque") == 0) {

            printf("Jogador 2 venceu\n");

        }

        else if (strcmp(jogadorUm, "pedra") == 0 && strcmp(jogadorDois, "papel") == 0) {

            printf("Jogador 1 venceu\n");

        }

        else if (strcmp(jogadorUm, "papel") == 0 && strcmp(jogadorDois, "pedra") == 0) {

            printf("Jogador 2 venceu\n");

        }

        else if (strcmp(jogadorUm, "papel") == 0 && strcmp(jogadorDois, "papel") == 0) {

            printf("Ambos venceram\n");

        }

        else if (strcmp(jogadorUm, "pedra") == 0 && strcmp(jogadorDois, "pedra") == 0) {

            printf("Sem ganhador\n");

        }

    }



    return 0;

}

