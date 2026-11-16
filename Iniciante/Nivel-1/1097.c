/*
 * Beecrowd | 1097 - Sequencia IJ 3
 * Categoria: Iniciante | Nível 1 | Assunto: Repetição
 * Link: https://judge.beecrowd.com/pt/problems/view/1097
 */

/******************************************************************************



Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.



Entrada

Não há nenhuma entrada neste problema.



Saída

Imprima a sequencia conforme exemplo abaixo.



Exemplo de Entrada	Exemplo de Saída

I=1 J=7

I=1 J=6

I=1 J=5

I=3 J=9

I=3 J=8

I=3 J=7



...

I=9 J=15

I=9 J=14

I=9 J=13



*******************************************************************************/

#include <stdio.h>



int main()

{

    //Variáveis

    int I = 1, J = 7;

    //Desenvolvimento e Saída de Dados

    do {

        printf("I=%d J=%d\n", I, J);

        J-=1;

        printf("I=%d J=%d\n", I, J);

        J-=1;

        printf("I=%d J=%d\n", I, J);

        I+=2;

        J+=4;

    } while(I < 10);



    return 0;

}

