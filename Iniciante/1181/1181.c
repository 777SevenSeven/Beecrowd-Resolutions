/******************************************************************************
Entrada
A primeira linha de entrada contem um número L (0 ≤ L ≤ 11) indicando a linha que será considerada para operação.
A segunda linha de entrada contém um único caractere Maiúsculo T ('S' ou 'M'), 
indicando a operação (Soma ou Média) que deverá ser realizada com os elementos da matriz.
Seguem os 144 valores de ponto flutuante que compõem a matriz, sendo que a mesma é preenchida linha por linha, da linha 0 até a linha 11,
sempre da esquerda para a direita.

Saída
Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal.

Exemplo de Entrada
2
S

Exemplo de Saída
0.0
-3.5
2.5
4.1
...

12.6
*******************************************************************************/
#include <stdio.h>

int main()
{
    //Variáveis
    char tipoDeOperacao = '-';
    int i = 0, j = 0, L = 0; //linha e coluna
    float matriz[12][12], resultado = 0;
    
    //Entrada de Dados
    scanf("%d", &L); //Linha que iremos verificar
    scanf(" %c", &tipoDeOperacao); //Se é 'S' de soma ou 'M' de média

    //Desenvolvimento de Dados
    for(i = 0; i < 12; i++) {
        for(j = 0; j < 12; j++) {
            scanf("%f", &matriz[i][j]);
            if(i == L) {
                resultado += matriz[i][j];
            }
        }//terminou a última coluna
    
    }
    //Saída de Dados
        if(tipoDeOperacao == 'S') {
            printf("%.1f\n", resultado);
            return 0;
        } else {
            resultado = resultado / 12;
            printf("%.1f\n", resultado);
            return 0;
            }
    

    return 0;
}