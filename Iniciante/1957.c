/******************************************************************************
Os dados armazenados no computador estão em binário. Uma forma econômica de ver estes números é usar a base 16 (hexadecimal).

Sua tarefa consiste em escrever um programa que, dado um número natural na base 10, mostre sua representação em hexadecimal.

Entrada
A entrada é um número inteiro positivo V na base 10 (1 ≤ V ≤ 2 x 109).

Saída
A saída é o mesmo número V na base 16 em uma única linha (não esqueça do caractere de fim-de-linha). Use letras maiúsculas, conforme os exemplos.

Exemplos de Entrada	Exemplos de Saída
10

A

15

F

16

10

31

1F

65535

FFFF
*******************************************************************************/
#include <stdio.h>

int main()
{
    //Variáveis
    int num = 0;
    
    //Entrada de Dados
    scanf("%d", &num);
    
    //Desenvolvimento e Saída de Dados
  
    printf("%X\n", num);

    return 0;
}
