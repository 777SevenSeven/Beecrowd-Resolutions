/*
 * Beecrowd | 1151 - Fibonacci Fácil
 * Categoria: Iniciante | Nível 2 | Assunto: Repetição
 * Link: https://judge.beecrowd.com/pt/problems/view/1151
 */

/******************************************************************************

A seguinte sequência de números 0 1 1 2 3 5 8 13 21... é conhecida como série de Fibonacci. 

Nessa sequência, cada número, depois dos 2 primeiros, é igual à soma dos 2 anteriores. 

Escreva um algoritmo que leia um inteiro N (N < 46) e mostre os N primeiros números dessa série.



Entrada

O arquivo de entrada contém um valor inteiro N (0 < N < 46).



Saída

Os valores devem ser mostrados na mesma linha, separados por um espaço em branco. Não deve haver espaço após o último valor.



Exemplo de Entrada

5



Exemplo de Saída

0 1 1 2 3



*******************************************************************************/



#include <stdio.h>



int main() {

    // Variáveis

    int N = 0, t1 = 0, t2 = 1, i = 0, proximoTermo = 0;



    // Entrada de Dados (O arquivo de entrada contém um valor inteiro N (0 < N < 46).

    scanf("%d", &N);



    // Desenvolvimento (Nessa sequência, cada número, depois dos 2 primeiros, é igual à soma dos 2 anteriores. )

    for(i = 0; i < N; i++) {

        printf("%d", t1);

        if(i != (N-1)) {

            printf(" ");

            

        } else {

            printf("\n");

        }

        proximoTermo = t1 + t2;

        t1 = t2;

        t2 = proximoTermo;

    }

    

    return 0;

}