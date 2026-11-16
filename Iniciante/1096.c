/******************************************************************************

Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

Entrada
Não há nenhuma entrada neste problema.

Saída
Imprima a sequencia conforme exemplo abaixo

Exemplo de Entrada	Exemplo de Saída
I=1 J=7
I=1 J=6
I=1 J=5
I=3 J=7
I=3 J=6
I=3 J=5
...
I=9 J=7
I=9 J=6
I=9 J=5

*******************************************************************************/
#include <stdio.h>

int main()
{
    //Variáveis
    int I = 1;
    
    //Desenvolvimento de Dados e Saída de Dados
    do {
        printf("I=%d J=7\n", I);
        printf("I=%d J=6\n", I);
        printf("I=%d J=5\n", I);
        I+=2;
    } while(I < 10);
   

    return 0;
}
