/*
 * Beecrowd | 1115 - Quadrante
 * Categoria: Iniciante | Nível 1 | Assunto: Repetição
 * Link: https://judge.beecrowd.com/pt/problems/view/1115
 */

/******************************************************************************



Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de pontos no sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence. O algoritmo será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem escrever mensagem alguma).



Entrada

A entrada contém vários casos de teste. Cada caso de teste contém 2 valores inteiros.



Saída

Para cada caso de teste mostre em qual quadrante do sistema cartesiano se encontra a coordenada lida, conforme o exemplo.



Exemplo de Entrada	Exemplo de Saída

2 2

3 -2

-8 -1

-7 1

0 2



primeiro

quarto

terceiro

segundo



*******************************************************************************/

#include <stdio.h>



int main()

{

    //Variáveis

    int x = 0, y = 0;

    

    //Entrada de Dados

    while(1) {

        scanf("%d %d", &x, &y);

        //Desenvolvimento de Dados e Saída de Dados

        if(x > 0 && y > 0) {

            printf("primeiro\n");

        } 

        else if(x < 0 && y > 0) {

            printf("segundo\n");

        } 

        else if(x < 0 && y < 0) {

            printf("terceiro\n");

        } 

        else if(x > 0 && y < 0) {

            printf("quarto\n");

        } else {

            break; //no caso de ter um 0, o programa fala nada e para

        }

    }

    



    return 0;

}

