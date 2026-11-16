/*
 * Beecrowd | 2930 - TCC da Depressão Natalino
 * Categoria: Iniciante | Nível 4 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2930
 */

#include <stdio.h>



int main() {

    int E, D;



    if (scanf("%d %d", &E, &D) != 2) {

        return 0;

    }



    if (D - E <= 0) {

        printf("Eu odeio a professora!\n");

        return 0;

    }



    if (D - E >= 3) {

        printf("Muito bem! Apresenta antes do Natal!\n");

    } else {

        printf("Parece o trabalho do meu filho!\n");

        E += 2;

        if (E < 24) {

            printf("TCC Apresentado!\n");

        } else {

            printf("Fail! Entao eh nataaaaal!\n");

        }

    }



    return 0;

}

