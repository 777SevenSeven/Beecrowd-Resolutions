/*
 * Beecrowd | 1132 - Múltiplos de 13
 * Categoria: Iniciante | Nível 1 | Assunto: Repetição
 * Link: https://judge.beecrowd.com/pt/problems/view/1132
 */

/******************************************************************************



Escreva um algoritmo que leia 2 valores inteiros X e Y calcule a soma dos números que não são múltiplos de 13 entre X e Y, incluindo ambos.



Entrada

O arquivo de entrada contém 2 valores inteiros quaisquer, não necessariamente em ordem crescente.



Saída

Imprima a soma de todos os valores não divisíveis por 13 entre os dois valores lidos na entrada, inclusive ambos se for o caso.



Sample Input

100

200



Sample Output

13954



*******************************************************************************/

#include <stdio.h>



int main()

{

    //Variáveis

    int X = 0, Y = 0, soma = 0, i = 0;

    

    //Entrada de Dados

    scanf("%d", &X);

    scanf("%d", &Y);

    

    //Desenvolvimento de Dados

    if(X > Y) { //se o máximo for X, faça:

        for(i = Y; i <= X; i++) { //i = Y, enquanto i for menor que o máximo, i aumenta 1

            if((i % 13) == 0) {

                //faça pora nenhuma

            } else {

                soma+=i; 

            }

        }

    } else if(Y > X) { //se o segundo numero digitado for maior que o primeiro faça

        for(i = X; i <= Y; i++) { //um loop em que o contador inicia no menor (menor numero digitado) enquanto o menor numero for menor, i++

            if((i % 13) == 0) {

                //faça pora nenhuma

            } else {

                soma+=i;

            }

        }

    }

    

    //Saída de Dados

    printf("%d\n", soma);



    return 0;

}

