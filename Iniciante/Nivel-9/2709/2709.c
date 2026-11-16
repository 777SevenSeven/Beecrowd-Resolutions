/*
 * Beecrowd | 2709 - As Moedas de Robbie
 * Categoria: Iniciante | Nível 9
 * Link: https://judge.beecrowd.com/pt/problems/view/2709
 */

#include <stdio.h>

#include <stdbool.h>



int main() {

    int M;



    // Entrada de Dados

    while (scanf("%d", &M) != EOF) { // Tratar EOF



        int moedas[20];



        for (int i = 0; i < M; i++) {

            scanf("%d", &moedas[i]);

        }



        int N;

        scanf("%d", &N);



        int soma = 0;



        // Desenvolvimento de Dados

        for (int i = M - 1; i >= 0; i -= N) { 

            soma += moedas[i];

        }



        // Verificação se é primo

        bool primo = true;



        if (soma < 2) {

            primo = false;

        }



        for (int i = 2; i < soma; i++) {

            if (soma % i == 0) {

                primo = false;

                break;

            }

        }



        // Saída de Dados

        if (primo) {

            printf("You’re a coastal aircraft, Robbie, a large silver aircraft.\n");

        } else {

            printf("Bad boy! I’ll hit you.\n");

        }

    }



    return 0;

}

