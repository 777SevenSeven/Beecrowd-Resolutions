/******************************************************************************
Entrada
A entrada contém vários casos de teste e termina com EOF.
Cada caso de teste consiste de uma linha contendo o número N de reclamações sobre a copa encaminhadas para a presidente (0 ≤ N ≤ 100).

Saída
Para cada teste, a saída consiste de uma linha dizendo "vai ter copa!" caso não haja reclamações para a presidente.
Caso haja reclamações, a saída deverá dizer "vai ter duas!".

Exemplo de Entrada
0
1
0
2
100
0

Exemplo de Saída
vai ter copa!
vai ter duas!
vai ter copa!
vai ter duas!
vai ter duas!
vai ter copa!
*******************************************************************************/
#include <stdio.h>

int main()
{
    //Variáveis
    int N = 0, i = 0;
    
    //Entrada de Dados
    while(scanf("%d", &N) != EOF) {
        
        //Saída de Dados
        if(N == 0) {
            puts("vai ter copa!");
        } else {
            puts("vai ter duas!");
        }
    }
    return 0;
}