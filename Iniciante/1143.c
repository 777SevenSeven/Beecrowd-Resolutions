/******************************************************************************

Escreva um programa que leia um valor inteiro N (1 < N < 1000). 
Este N é a quantidade de linhas de saída que serão apresentadas na execução do programa.

Entrada
O arquivo de entrada contém um número inteiro positivo N.

Saída
Imprima a saída conforme o exemplo fornecido.

Exemplo de Entrada	
5

Exemplo de Saída
1 1 1
2 4 8
3 9 27
4 16 64
5 25 125

*******************************************************************************/
#include <stdio.h>

int main()
{
    //Variáveis
    int maximo = 0, N = 0, NDuasVezes = 0, NTresVezes = 0, i = 0; 
    
    //Entrada de Dados
    scanf("%d", &maximo);
    
    //Desenvolvimento de Dados
    for(i = 1; i <= maximo; i++) {
        N = i;
        NDuasVezes = N * N;
        NTresVezes = NDuasVezes * N;
        printf("%d %d %d\n", N, NDuasVezes, NTresVezes);
    }

    return 0;
}
