/*
 * Beecrowd | 1155 - Sequência S
 * Categoria: Iniciante | Nível 2 | Assunto: Repetição
 * Link: https://judge.beecrowd.com/pt/problems/view/1155
 */

/******************************************************************************

Escreva um algoritmo para CALCULAR e IMPRIMIR o valor de S, sendo S dado pela fórmula:

S = 1 + 1/2 + 1/3 + … + 1/100



ENTRADA



Não há nenhuma ENTRADA neste problema.



SAÍDA



A SAÍDA contém um valor correspondente ao valor de S.

O valor deve ser IMPRESSO com DOIS dígitos APÓS o PONTO DECIMAL.



Exemplo de ENTRADA

Exemplo de SAÍDA



Agradecimentos a Cassio F.

*******************************************************************************/



#include <stdio.h>



int main() {

    // Variáveis

    float S = 0;

    int i = 1;



    // Entrada de Dados (Não há nenhuma entrada neste problema).

    



    // Desenvolvimento (Calcular S = 1 + 1/2 + 1/3 + … + 1/100).

    for(i = 1; i <= 100; i++) {

        S += (float)(1.0 / (i));

    }



    // Saída de Dados (O valor deve ser impresso com dois dígitos após o ponto decimal).

    printf("%.2f\n", S);



    return 0;

}