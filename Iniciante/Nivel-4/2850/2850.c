/*
 * Beecrowd | 2850 - Papagaio Poliglota
 * Categoria: Iniciante | Nível 4
 * Link: https://judge.beecrowd.com/pt/problems/view/2850
 */

#include <stdio.h>

#include <string.h>



int main() {

    char perna[50];



    // Lê até EOF

    while (fgets(perna, sizeof(perna), stdin)) {

        // Remove o '\n' final, se existir

        size_t len = strlen(perna);

        if (len > 0 && perna[len - 1] == '\n') {

            perna[len - 1] = '\0';

        }



        if (strcmp(perna, "esquerda") == 0) {

            printf("ingles\n");

        } else if (strcmp(perna, "direita") == 0) {

            printf("frances\n");

        } else if (strcmp(perna, "nenhuma") == 0) {

            printf("portugues\n");

        } else {

            printf("caiu\n");

        }

    }



    return 0;

}

