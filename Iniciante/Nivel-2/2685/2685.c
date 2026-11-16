/*
 * Beecrowd | 2685 - A Mudança
 * Categoria: Iniciante | Nível 2
 * Link: https://judge.beecrowd.com/pt/problems/view/2685
 */

#include <stdio.h>



int main() {



    int M;



    while (scanf("%d", &M) != EOF) {



        if (M == 360 || M < 90) {

            printf("Bom Dia!!\n");

        }

        else if (M < 180) {

            printf("Boa Tarde!!\n");

        }

        else if (M < 270) {

            printf("Boa Noite!!\n");

        }

        else {

            printf("De Madrugada!!\n");

        }

    }



    return 0;

}