/******************************************************************************

Escreva um programa que leia dois valores X e Y. A seguir, mostre uma sequência de 1 até Y, passando para a próxima linha a cada X números.

Entrada
O arquivo de entrada contém dois valores inteiros, (1 < X < 20) e (X < Y < 100000).

Saída
Cada sequência deve ser impressa em uma linha apenas, com 1 espaço em branco entre cada número, 
conforme exemplo abaixo. Não deve haver espaço em branco após o último valor da linha.

Exemplo de Entrada
3 99

Exemplo de Saída
1 2 3
4 5 6
7 8 9
10 11 12
...
97 98 99

*******************************************************************************/
#include <stdio.h>

int main()
{
    //Variáveis
    int numeroPorLinhas = 0, fim = 0, i = 0, j = 0;
    
    //Entrada de Dados
    scanf("%d %d", &numeroPorLinhas, &fim);
    
    //Desenvolvimento de Dados
    for(i = 1; i <= fim; i++) { //aqui ele conta até o fim dado pelo usuário
        
        if(j < numeroPorLinhas) { //caso contrário (se não for o de antes) ele vem aqui e verifica se j é menor ou igual à números por linha
            printf("%d", i); //printa com um espaço para o lado
            j++;
            if(j == numeroPorLinhas) {
                printf("\n");
                j = 0;
            }
            else {
                printf(" ");
            }
        }
    }

    return 0;
}
