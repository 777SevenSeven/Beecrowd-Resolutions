/*
 * Beecrowd | 1113 - Crescente e Decrescente
 * Categoria: Iniciante | Nível 1 | Assunto: Repetição
 * Link: https://judge.beecrowd.com/pt/problems/view/1113
 */

/******************************************************************************



Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente.



Entrada

A entrada contém vários casos de teste. Cada caso contém dois valores inteiros X e Y. A leitura deve ser encerrada ao ser fornecido valores iguais para X e Y.



Saída

Para cada caso de teste imprima “Crescente”, caso os valores tenham sido digitados na ordem crescente, caso contrário imprima a mensagem “Decrescente”.



Exemplo de Entrada	Exemplo de Saída

5 4

7 2

3 8

2 2



Decrescente

Decrescente

Crescente



*******************************************************************************/

#include <stdio.h>



int main()

{

    //Variáveis

    int X = 0, Y = 0;

    

    

    while(1) {

        //Entrada de Dados

        scanf("%d %d", &X, &Y);

        

        //Desenvolvimento de Dados

        if(X < Y) {

            //Saída de Dados

            printf("Crescente\n");

        } else if (X > Y) {

            //Saída de Dados

            printf("Decrescente\n");

        } else {

            break;

        }

    };



    return 0;

}

