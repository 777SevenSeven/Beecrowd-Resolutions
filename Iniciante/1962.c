/******************************************************************************
Entrada
A entrada tem várias linhas. A primeira tem um inteiro positivo N (1 ≤ N ≤ 100000). 
A seguir existem N linhas. Cada uma dessas N linhas tem um único inteiro não negativo T, que indica o número de anos transcorridos até 2015 D.C. (0 ≤ T < 231).

Saída
A saída tem N linhas. Em cada uma, deve ser indicado o ano A em que o correspondente tempo T aconteceu. Veja o exemplo de saída.

Exemplo de Entrada	Exemplo de Saída
3
10000
15
2015

7986 A.C.
2000 D.C.
1 A.C.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variáveis
    int ano = 0, CasosTeste = 0, quantosAnosForam = 0;
    
    //Entrada de Dados
    scanf("%d", &CasosTeste);
    
    //Desenvolvimento de Dados
    for(int i = 0; i < CasosTeste; i++) {
        scanf("%d", &ano);
        quantosAnosForam = ano - 2014;
        
        //Saída de Dados
        if(ano > 2014) {
            printf("%d A.C.\n", abs(quantosAnosForam));
        } else {
            quantosAnosForam--;
            printf("%d D.C.\n", abs(quantosAnosForam));
        }
        /*if(quantosAnosForam == 0) {
            puts("1 A.C.");
        }*/
    }

    return 0;
}
