/*
 * Beecrowd | 1178 - Preenchimento de Vetor III
 * Categoria: Iniciante | Nível 2 | Assunto: Vetores
 * Link: https://judge.beecrowd.com/pt/problems/view/1178
 */

/******************************************************************************

Leia um valor X. Coloque este valor na primeira posição de um vetor N[100]. Em cada posição subsequente de N (1 até 99),

coloque a metade do valor armazenado na posição anterior, conforme o exemplo abaixo. Imprima o vetor N.



Entrada

A entrada contem um valor de dupla precisão com 4 casas decimais.



Saída

Para cada posição do vetor N, escreva "N[i] = Y", onde i é a posição do vetor e Y é o valor armazenado naquela posição.

Cada valor do vetor deve ser apresentado com 4 casas decimais.



Exemplo de Entrada	

200.0000



Exemplo de Saída

N[0] = 200.0000

N[1] = 100.0000

N[2] = 50.0000

N[3] = 25.0000

N[4] = 12.5000

...



*******************************************************************************/

#include <stdio.h>



int main()

{

    //Variáveis

    double N[100];

    int i = 0;

    

    //Entrada de Dados

    scanf("%lf", &N[i]);

    printf("N[%d] = %.4lf\n", i, N[i]);

    N[1] = N[i] / 2;

    

    //Desenvolvimento de Dados

    for(i = 1; i <= 99; i++) {

        

        //Saída de Dados

        printf("N[%d] = %.4lf\n", i, N[i]);

        N[i+1] = N[i] / 2;

        

    }

    

    return 0;

}