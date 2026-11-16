/******************************************************************************

Escreva um programa que leia 2 valores X e Y e que imprima todos os valores entre eles cujo resto da divisão dele por 5 for igual a 2 ou igual a 3.

Entrada
O arquivo de entrada contém 2 valores positivos inteiros quaisquer, não necessariamente em ordem crescente.

Saída
Imprima todos os valores conforme exemplo abaixo, sempre em ordem crescente.

Sample Input	
10
18

Sample Output
12
13
17

*******************************************************************************/
#include <stdio.h>

int main()
{
    //Variáveis
    int inicio = 0, fim = 0, divisivel = 0, i = 0;
    
    //Entrada de Dados
    scanf("%d", &inicio);
    scanf("%d", &fim);
    
    //Desenvolvimento de Dados
    if(inicio > fim) {
        for(i = fim+1; i < inicio; i++) {
            if(((i % 5) == 2) || ((i % 5) == 3)){
                divisivel = i;
                printf("%d\n", divisivel);
            }
        }
    }
    else {
        for(i = inicio+1; i < fim; i++) {
            if(((i % 5) == 2) || ((i % 5) == 3)){
                    divisivel = i;
                    printf("%d\n", divisivel);
                }
            }
        }

    return 0;
}
