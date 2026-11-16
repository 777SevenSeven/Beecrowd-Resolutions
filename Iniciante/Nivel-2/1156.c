/*
 * Beecrowd | 1156 - Sequência S II
 * Categoria: Iniciante | Nível 2 | Assunto: Repetição
 * Link: https://judge.beecrowd.com/pt/problems/view/1156
 */

/******************************************************************************

Escreva um algoritmo para calcular e escrever o valor de S, sendo S dado pela fórmula:

S = 1 + 3/2 + 5/4 + 7/8 + ... + 39/?



Entrada



Não há nenhuma entrada neste problema.



Saída



A saída contém um valor correspondente ao valor de S.

O valor deve ser impresso com DOIS dígitos APÓS o ponto DECIMAL.



Exemplo de Entrada

Exemplo de Saída



1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39



Agradecimentos a Cassio F.

*******************************************************************************/



#include <stdio.h>



int main() {

    // Variáveis

    float S = 0, i = 1, j = 1;

    int contador = 0;



    // Entrada de Dados (Não há nenhuma entrada neste problema).

    



    // Desenvolvimento (S = 1 + 3/2 + 5/4 + 7/8 + ... + 39/?). 

    for(contador = 1; contador < 20; contador++) {

        for(contador = 1; contador < 20; contador++) {

            S += (i / j);

            i+= 2.0;

            j*= 2.0;

            //printf("Teste de debug: S = %.2f, i = %.2f e j = %.2f\n", S, i, j);

        }

    }



    // Saída de Dados

    printf("%.2f\n", S);



    return 0;

}