/*
 * Beecrowd | 1073 - Quadrado de Pares
 * Categoria: Iniciante | Nível 1 | Assunto: Repetição
 * Link: https://judge.beecrowd.com/pt/problems/view/1073
 */

/******************************************************************************



Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N, inclusive N, se for o caso.



Entrada

A entrada contém um valor inteiro N (5 < N < 2000).



Saída

Imprima o quadrado de cada um dos valores pares, de 1 até N, conforme o exemplo abaixo.



Tome cuidado! Algumas linguagens tem por padrão apresentarem como saída 1e+006 ao invés de 1000000 o que ocasionará resposta errada. Neste caso, configure a precisão adequadamente para que isso não ocorra.



Exemplo de Entrada	Exemplo de Saída

6



2^2 = 4

4^2 = 16

6^2 = 36



*******************************************************************************/

#include <stdio.h>



int main()

{

    //Variáveis

    int numMaximo = 0, numParQuadrado = 0, i = 1, quadrado = 2;

    //Entrada de Dados

    scanf("%d", &numMaximo);

    //Desenvolvimento de Dados

    for(i = 1; i <= numMaximo; i++) {

        if((i % 2) == 0) {

            numParQuadrado = i*i;

            printf("%d^%d = %d\n", i, quadrado, numParQuadrado);

        }

    }



    return 0;

}

