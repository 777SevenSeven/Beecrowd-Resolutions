/******************************************************************************

Faça um programa que leia um valor T e preencha um vetor N[1000] com a sequência de valores de 0 até T-1 repetidas vezes, conforme exemplo abaixo. Imprima o vetor N.

Entrada
A entrada contém um valor inteiro T (2 ≤ T ≤ 50).

Saída
Para cada posição do vetor, escreva "N[i] = x", onde i é a posição do vetor e x é o valor armazenado naquela posição.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //Variáveis
    int N[10], T = 0, i = 0;
    
    //Entrada de Dados
    scanf("%d", &T);
    
    //Desenvolvimento de Dados
    for(i = 0; i < 1000; i++) {
        //Parte 1: Preencher o vetor N
        N[i] = i % T;
        printf("N[%d] = %d\n", i, N[i]); //primeira parte: Contar de 0 à 999
    }
    
    //Saída de Dados
    
    
    return 0;
}