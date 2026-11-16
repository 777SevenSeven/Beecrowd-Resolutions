/*
 * Beecrowd | 1075 - Resto 2
 * Categoria: Iniciante | Nível 2 | Assunto: Repetição
 * Link: https://judge.beecrowd.com/pt/problems/view/1075
 */

/******************************************************************************

Leia um valor inteiro N. Apresente todos os números entre 1 e 10000 que divididos por N dão resto igual a 2.



Entrada

A entrada contém um valor inteiro N (N < 10000).



Saída

Imprima todos valores que quando divididos por N dão resto = 2, um por linha.



Exemplo de Entrada	Exemplo de Saída

13



2

15

28

41

...

*******************************************************************************/

#include <stdio.h>



int main()

{

    //Variáveis

    int N = 0, i = 2;

    //Entrada de Dados

    scanf("%d", &N);

    //Desenvolvimento de Dados

    for(i = 2; i < 10000; i++) {

        if((i % N) == 2) {

            printf("%d\n", i);

        }

    }

    

    return 0;

}

