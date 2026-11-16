/*
 * Beecrowd | 1866 - Conta
 * Categoria: Iniciante | Nível 1
 * Link: https://judge.beecrowd.com/pt/problems/view/1866
 */

/******************************************************************************

S = 1 - 1 + 1 - 1 + 1 - 1 + 1 - 1 ...



Escreva um programa que, dada uma quantidade de termos, informar o resultado do somatório acima.



Entrada

Um número inteiro C será informado, que será a quantidade de casos de teste. Cada caso de teste inicia com um número inteiro N (1 ≤ N ≤ 1000),

indicando a quantidade de termos da soma.



Saída

Para cada caso de teste imprima um número S, que é o resultado da soma dos N termos da expressão.



Exemplo de Entrada

3

11

7

18



Exemplo de Saída

1

1

0

*******************************************************************************/

#include <stdio.h>



int main()

{

    //Variáveis

    int C = 0, N = 0, i = 0;

    

    //Entrada de Dados

    scanf("%d", &C);

    

    for(i = 0; i < C; i++) {

        scanf("%d", &N);

        

        //Saída de Dados

        if((N % 2) == 0) {

            printf("0\n");

        } else {

            printf("1\n");

        }

    }

    

    return 0;

}

