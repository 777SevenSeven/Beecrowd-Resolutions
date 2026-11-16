/*
 * Beecrowd | 1095 - Sequencia IJ 1
 * Categoria: Iniciante | Nível 1 | Assunto: Repetição
 * Link: https://judge.beecrowd.com/pt/problems/view/1095
 */

/******************************************************************************



Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.



Entrada

Não há nenhuma entrada neste problema.



Saída

Imprima a sequencia conforme exemplo abaixo



Exemplo de Entrada	Exemplo de Saída

I=1 J=60

I=4 J=55

I=7 J=50

...

I=? J=0



*******************************************************************************/

#include <stdio.h>



int main()

{

    //Variáveis

    int I = 1, J = 60;

    

    //Desenvolvimento de Dados e Saída de Dados

    while(J >= 0) {

        printf("I=%d J=%d\n", I, J);

        I += 3;

        J -= 5;

    };



    return 0;

}