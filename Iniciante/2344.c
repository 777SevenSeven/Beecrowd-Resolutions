/******************************************************************************
Você deve escrever um programa que recebe uma nota no sistema numérico e determina o conceito correspondente.

Entrada
A entrada contém um único conjunto de testes, que deve ser lido do dispositivo de entrada padrão (normalmente o teclado).
A entrada contém uma única linha com um número inteiro N (0 ≤ N ≤ 100), representando uma nota de prova no sistema numérico.

Saída
Seu programa deve imprimir, na saída padrão, uma letra (A, B, C, D, ou E em maiúsculas) representando o conceito correspondente à nota dada na entrada.
*******************************************************************************/
#include <stdio.h>

int main()
{
    //Variáveis
    int N = 0;
    
    //Entrada de Dados
    scanf("%d", &N);
    
    //Saída de Dados
    if(N == 0) 
        puts("E");
    else if(N >= 1 && N <= 35)
        puts("D");
    else if(N >= 36 && N <= 60)
        puts("C");
    else if(N >= 61 && N <= 85)
        puts("B");
    else if(N >= 86 && N <= 100)
        puts("A");
    
    return 0;
}
