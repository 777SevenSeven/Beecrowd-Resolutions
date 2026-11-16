/*
 * Beecrowd | 2712 - Rodízio Veicular
 * Categoria: Iniciante | Nível 4
 * Link: https://judge.beecrowd.com/pt/problems/view/2712
 */

#include <stdio.h>

#include <string.h>

#include <stdbool.h>



int main() {



    int casosTeste;

    scanf("%d", &casosTeste);



    for (int i = 0; i < casosTeste; i++) {



        char placa[101];

        scanf("%s", placa);



        bool valida = true;



        // A placa precisa ter exatamente 8 caracteres

        if (strlen(placa) != 8) {

            valida = false;

        }



        // O hífen precisa estar na posição 3

        if (valida && placa[3] != '-') {

            valida = false;

        }



        // Posições 0, 1 e 2 precisam ser letras maiúsculas

        if (valida) {

            for (int j = 0; j < 3; j++) {

                char caractere = placa[j];



                if (caractere < 'A' || caractere > 'Z') {

                    valida = false;

                }

            }

        }



        // Posições 4, 5, 6 e 7 precisam ser números

        if (valida) {

            for (int j = 4; j < 8; j++) {

                char caractere = placa[j];



                if (caractere < '0' || caractere > '9') {

                    valida = false;

                }

            }

        }



        // Se a placa for inválida

        if (!valida) {

            printf("FAILURE\n");

            continue;

        }



        // Se a placa for válida, olha o último dígito

        char ultimo = placa[strlen(placa) - 1];



        if (ultimo == '1' || ultimo == '2') {

            printf("MONDAY\n");

        }

        else if (ultimo == '3' || ultimo == '4') {

            printf("TUESDAY\n");

        }

        else if (ultimo == '5' || ultimo == '6') {

            printf("WEDNESDAY\n");

        }

        else if (ultimo == '7' || ultimo == '8') {

            printf("THURSDAY\n");

        }

        else if (ultimo == '9' || ultimo == '0') {

            printf("FRIDAY\n");

        }

    }



    return 0;

}