/*
 * Beecrowd | 1914 - De Quem é a Vez?
 * Categoria: Iniciante | Nível 2 | Assunto: Iniciante
 * Link: https://judge.beecrowd.com/pt/problems/view/1914
 */

#include <stdio.h>

#include <string.h>



int main() {

    int QT;

    scanf("%d", &QT);



    while (QT--) {

        char jogador1[101], escolha1[10];

        char jogador2[101], escolha2[10];

        int numeroEscolhido1, numeroEscolhido2;



        // Leitura dos nomes e escolhas

        scanf("%s %s %s %s", jogador1, escolha1, jogador2, escolha2);

        // Leitura dos números

        scanf("%d %d", &numeroEscolhido1, &numeroEscolhido2);



        int soma = numeroEscolhido1 + numeroEscolhido2;



        if (soma % 2 == 0) {

            if (strcmp(escolha1, "PAR") == 0) {

                printf("%s\n", jogador1);

            } else {

                printf("%s\n", jogador2);

            }

        } else {

            if (strcmp(escolha1, "IMPAR") == 0) {

                printf("%s\n", jogador1);

            } else {

                printf("%s\n", jogador2);

            }

        }

    }



    return 0;

}

