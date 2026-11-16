/*
 * Beecrowd | 1865 - Mjölnir
 * Categoria: Iniciante | Nível 1
 * Link: https://judge.beecrowd.com/pt/problems/view/1865
 */

/******************************************************************************

Escreva um programa que, dado um nome, e a força, em Newtons, aplicado ao tentar levantar o Mjölnir, informar se a pessoa conseguiu ou não levantá-lo.



Entrada

Um número inteiro C será informado, que será a quantidade de casos de teste. Cada caso de teste inicia com uma palavra, que é o primeiro nome 

de quem está tentando levantar o Mjölnir, e um inteiro N (1 ≤ N ≤ 25000), indicando a força aplicada para cima, em Newtons, ao puxar o martelo,

de modo a tentar levantá-lo.



Saída

Para cada caso de teste imprima um caractere ‘Y’, caso a pessoa tenha conseguido levantar , ou ‘N’, caso não tenha conseguido.



Exemplo de Entrada

4



Hulk 5000

Tony 1000

Thor 50

Steve 500



Exemplo de Saída

N

N

Y

N



*******************************************************************************/

#include <stdio.h>

#include <string.h>



int main()

{

    //Variáveis

    int forca = 0, casosTestes = 0, i = 0;

    char nome[30];

    

    //Entrada de Dados

    scanf("%d", &casosTestes);

    for(i = 0; i < casosTestes; i++) {

        scanf("%29s %d", nome, &forca);

        

        //Desenvolvimento e Saída de Dados

        if(strcmp(nome, "Thor") == 0) {

            printf("Y\n"); 

        } else {

            printf("N\n");

        }

    }



    return 0;

}