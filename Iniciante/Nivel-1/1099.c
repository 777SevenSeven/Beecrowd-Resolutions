/*
 * Beecrowd | 1099 - Soma de Ímpares Consecutivos II
 * Categoria: Iniciante | Nível 1 | Assunto: Repetição
 * Link: https://judge.beecrowd.com/pt/problems/view/1099
 */

/******************************************************************************



Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste de dois inteiros X e Y. Você deve apresentar a soma de todos os ímpares existentes entre X e Y.



Entrada

A primeira linha de entrada é um inteiro N que é a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste em uma linha contendo dois inteiros X e Y.



Saída

Imprima a soma de todos valores ímpares entre X e Y.



Exemplo de Entrada

7



4 5



13 10



6 4



3 3



3 5



3 4



3 8



Exemplo de Saída

0



11



5



0



0



0



12



*******************************************************************************/

#include <stdio.h>



int main()

{

    //Variáveis

    int N = 0, X = 0, Y = 0, i = 0, j =0, k = 0, somaXY = 0;

    

    //Entrada de Dados

    scanf("%d", &N);

    

    //Desenvolvimento de Dados

    for(i = 0; i < N; i++) {

        scanf("%d %d", &X, &Y);

        if(X > Y) { 

            for(j = Y+1; j < X; j++) { //o contador recebe Y (menor máximo), enquanto o contador não chegar no Máximo de X, i++

                if((j % 2) != 0) {

                    somaXY = (j + somaXY);

                }

            }

            printf("%d\n", somaXY);

            somaXY = 0;

        }

        else if (Y > X) {

            for(k = X+1; k < Y; k++) {

              if((k % 2) != 0) {

                    somaXY = (k + somaXY);

                }

            }

            printf("%d\n", somaXY);

            somaXY = 0;

        }

        else {

            printf("0\n");

        }

    }

    

    return 0;

}

