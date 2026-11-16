/******************************************************************************
Na matemática, um número perfeito é um número inteiro para o qual a soma de todos os seus divisores positivos próprios
(excluindo ele mesmo) é igual ao próprio número. Por exemplo o número 6 é perfeito, pois 1+2+3 é igual a 6.
Sua tarefa é escrever um programa que imprima se um determinado número é perfeito ou não.

Entrada
A entrada contém vários casos de teste. A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 20),
indicando o número de casos de teste da entrada. Cada uma das N linhas seguintes contém um valor inteiro X (1 ≤ X ≤ 108), que pode ser ou não, um número perfeito.

Saída
Para cada caso de teste de entrada, imprima a mensagem “X eh perfeito” ou “X nao eh perfeito”, de acordo com a especificação fornecida.

Exemplo de Entrada
3
6
5
28

Exemplo de Saída
6 eh perfeito
5 nao eh perfeito
28 eh perfeito
*******************************************************************************/
#include <stdio.h>

int main()
{
    //Variáveis
    int X = 0, N = 0, i = 0, j = 0, testeSomaNumeroPerfeito = 0;
    
    //Entrada de Dados
    scanf("%d", &N); //Quantos números serão testados
    
    //Desenvolvimento de Dados
    for(i = 0; i < N; i++) { //Testar números diferentes até chegar à quantidade N
        scanf("%d", &X); //Número que será testado
        
        for(j = 1; j < X; j++) { //Loop indo de 1, 2, 3, excluindo o próprio número X sendo testado
        
            if((X % j) == 0) { //Verifica se o número atual do loop é divisível pelo número X sendo testado, se sim:
                testeSomaNumeroPerfeito += j; //teste[1] = 1, teste[2] = 2, teste[3] = 3.
            }
            
        } //Loop termina aqui
        //Saída de Dados
        if(testeSomaNumeroPerfeito == X) {
                printf("%d eh perfeito\n", X);
                testeSomaNumeroPerfeito = 0;
            } else {
                printf("%d nao eh perfeito\n", X);
                testeSomaNumeroPerfeito = 0;
            }
       
    };
    
    return 0;
}
