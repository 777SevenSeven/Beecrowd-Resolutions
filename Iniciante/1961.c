/******************************************************************************
Entrada
A entrada é dada em duas linhas. A primeira tem dois inteiros positivos P e N, a altura do pulo do sapo e o número de canos (1 ≤ P ≤ 5 e 2 ≤ N ≤ 100).
A segunda linha tem N inteiros positivos que indicam as alturas dos canos ordenados da esquerda para a direita. Não há altura maior do que 10.

Saída
A saída é dada em uma única linha. Se o sapo pode chegar no cano mais à direita, escreva "YOU WIN". Se o sapo não consegue, escreva "GAME OVER".
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variáveis
    int P = 0, N = 0, canoInicial = 0, canoFinal = 0, diferencaAltura = 0, estado = 5;
    
    //Entrada de Dados 
    scanf("%d %d", &P, &N); 
    scanf("%d", &canoInicial); 
    
    //Desenvolvimento de Dados
    for(int i = 0; i < N-1; i++) {
        scanf("%d", &canoFinal); 
        
        diferencaAltura = canoFinal - canoInicial; 
        canoInicial = canoFinal;
        
        if(abs(diferencaAltura) > P) { 
            estado = 0;
        } else {
            continue;
        }
    }
    
    if(estado == 0) {
        puts("GAME OVER");
    } else {
        puts("YOU WIN");
    }

    return 0;
}
