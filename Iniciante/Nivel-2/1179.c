/*
 * Beecrowd | 1179 - Preenchimento de Vetor IV
 * Categoria: Iniciante | Nível 2 | Assunto: Vetores
 * Link: https://judge.beecrowd.com/pt/problems/view/1179
 */

#include <stdio.h>



int main() {

    int vetorPar[5], vetorImpar[5];

    int num, i, j, qtdPar = 0, qtdImpar = 0;



    for (i = 0; i < 15; i++) {

        scanf("%d", &num);



        if (num % 2 == 0) {

            vetorPar[qtdPar] = num;

            qtdPar++;

            if (qtdPar == 5) {

                for (j = 0; j < 5; j++) {

                    printf("par[%d] = %d\n", j, vetorPar[j]);

                }

                qtdPar = 0;

            }

        } else {

            vetorImpar[qtdImpar] = num;

            qtdImpar++;

            if (qtdImpar == 5) {

                for (j = 0; j < 5; j++) {

                    printf("impar[%d] = %d\n", j, vetorImpar[j]);

                }

                qtdImpar = 0;

            }

        }

    }



    for (i = 0; i < qtdImpar; i++) {

        printf("impar[%d] = %d\n", i, vetorImpar[i]);

    }



    for (i = 0; i < qtdPar; i++) {

        printf("par[%d] = %d\n", i, vetorPar[i]);

    }



    return 0;

}

