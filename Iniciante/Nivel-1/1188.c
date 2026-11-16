/*
 * Beecrowd | 1188 - Área Inferior
 * Categoria: Iniciante | Nível 1 | Assunto: Matrizes
 * Link: https://judge.beecrowd.com/pt/problems/view/1188
 */

/******************************************************************************



Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12]. 

Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão na área inferior da matriz, conforme ilustrado abaixo (área verde).









Entrada

A primeira linha de entrada contem um único caractere Maiúsculo O ('S' ou 'M'), indicando a operação (Soma ou Média)

que deverá ser realizada com os elementos da matriz. Seguem os 144 valores de ponto flutuante de dupla precisão (double) que compõem a matriz.



Saída

Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal.

*******************************************************************************/

#include <stdio.h>



int main()

{

    //Variáveis

    int i = 0, j = 0;

    double M[12][12], soma = 0, media = 0;

    char escolha;

    

    //Entrada de Dados

    scanf("%c", &escolha);

    

    for(i = 0; i < 12; i++) { 

        for(j = 0; j < 12; j++) {

            scanf("%lf", &M[i][j]);

            

                if(i >= 7) {

                    if(j >= (12 - i) && j <= (i-1)) {

                        soma += M[i][j];

                }

            }

        }

    }

    

            

    

    switch (escolha) {

        case 'S':

            

            //Saída de Dados

            printf("%.1lf\n", soma);

            break;

        

        case 'M':

            media = soma / 30;

            

            //Saída de Dados

            printf("%.1lf\n", media);

            break;

    }

    

    return 0;

}