/*
 * Beecrowd | 3520 - Próximo ímpar
 * Categoria: Iniciante | Nível 2 | Assunto: Fácil
 * Link: https://judge.beecrowd.com/pt/problems/view/3520
 */

/******************************************************************************

Entrada

A entrada contém um único número inteiro N ( 1 ≤ N ≤ 10^5 ).







Saída

A saída deve conter um número inteiro que representa o primeiro número ímpar maior que N.

*******************************************************************************/

#include <stdio.h>



int main()

{

    //Variáveis

    int N = 0;

    

    //Entrada de Dados

    scanf("%d", &N);

    

    //Desenvolvimento de Dados

    

    

    do {

        N++;

        

    } while(N % 2 == 0);

    

    //Saída de Dados

    printf("%d\n", N);



    return 0;

}

