/******************************************************************************

Faça um algoritmo para ler um valor A e um valor N. Imprimir a soma de A + i para cada i com os valores (0 <= i <= N-1). Enquanto N for negativo ou ZERO, um novo N(apenas N) deve ser lido.

Entrada
A entrada contém somente valores inteiros, podendo ser positivos ou negativos. Todos os valores estão na mesma linha.

Saída
A saída contém apenas um valor inteiro.

Exemplo de Entrada
3 2

3 -1 0 -2 2
Exemplo de Saída
7

7

*******************************************************************************/
#include <stdio.h>

int main()
{
    //Variáveis (A entrada contém somente valores inteiros)
    int A = 0, N = 0, soma = 0, i = 0;
    
    //Entrada de Dados (Faça um algoritmo para ler um valor A e um valor N.)
    scanf("%d %d", &A, &N);
    
    //Desenvolvimento de Dados (Enquanto N for negativo ou ZERO, um novo N(apenas N) deve ser lido.)
    while(N <= 0) {
        scanf("%d", &N);
    }
    
    //Saída de Dados (Imprimir a soma de A + i para cada i com os valores (0 <= i <= N-1))
    for(i = 0; i <= N-1; i++) {
        soma += (A + i);
    }
    printf("%d\n", soma);
    
    return 0;
}
