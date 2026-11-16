/******************************************************************************

Ramsay: "(...) você vence se conseguir adivinhar quem eu sou e por que estou torturando você."

Theon deve pensar rápido e adivinhar quem é seu algoz! Entretanto, Ramsay já decidiu o que ELE IRÁ FAZER DEPOIS que Theon der SUA RESPOSTA.

Theon pode dizer que seu algoz é ALGUMA DENTRE N PESSOAS. Considere que as pessoas são NUMERADAS DE 1 a N (Array com o selecionado ficando em i),
se Theon responder que seu algoz é a PESSOA i, 
Ramsay irá atingi-lo Ti (T * i) VEZES.

Sua tarefa é ajudar Theon a determinar qual deve ser sua resposta de forma a MINIMIZAR o NÚMERO DE VEZES que ele SERÁ ATINGIDO (T[i]).

ENTRADA
A PRIMEIRA LINHA CONTÉM um INTEIRO N (1 ≤ N ≤ 100). A SEGUNDA LINHA CONTÉM N inteiros T1, T2, ..., TN (0 ≤ T[i] ≤ 20).

SAÍDA
IMPRIMA UMA LINHA contendo o número da pessoa que Theon deve dizer ser seu algoz. SE existe MAIS DE UMA resposta possível, IMPRIMA A MENOR.

*******************************************************************************/
#include <stdio.h>
int main()
{
    //O EXERCÍCIO É UM TROLL FUDIDO DESGRAÇADO, NO FINAL DAS CONTAS ELE QUER O MENOR NÚMERO DENTRE AS OPÇÕES DDAS PELO VILÃO
    
    //variáveis
    int N = 0, T[100], menorValor = 0, i = 0, indiceMenor = 0;
    
    //Entrada de dados
    scanf("%d", &N); //Primeira LINHA (escolheu a quantidade de opções para o vilão da entrada 2)
    
    while(i < N) {
        scanf("%d", &T[i]); //Segunda linha (quantidade de opções baseado em N final)
        i+=1;
    }
    
    //Desenvolvimento de dados
    menorValor = T[0]; //estou chutando que o menor número é o primeiro dos enviados
    indiceMenor = 1;
    
    for(i = 0; i < N; i++) { //Itera sobre os valores
        if(T[i] < menorValor) { //menorNReserva é menor que o valor atual do array no loop? Ex: segundo número do array
            menorValor = T[i];
            indiceMenor = i + 1; //vai receber o menor índice (menos tiros recebidos)
        };
    };
    
    //Saída de dados
    printf("%d\n", indiceMenor);

    return 0;
}