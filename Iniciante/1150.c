/******************************************************************************
Faça um programa que leia dois inteiros: X e Z (devem ser lidos tantos valores para Z quantos necessários, até que seja digitado um valor maior do que X para ele).
Conte quantos números inteiros devem ser somados em sequência (considerando o X nesta soma) para que a soma ultrapasse a Z o mínimo possível.
Escreva o valor final da contagem.

A entrada pode conter, por exemplo, os valores 21 21 15 30.
Neste caso, é então assumido o valor 21 para X enquanto os valores 21 e 15 devem ser desconsiderados pois são menores ou iguais a X.
Como o valor 30 está dentro da especificação (maior do que X) ele será válido e então deve-se processar os cálculos para apresentar na saída o valor 2,
pois é a quantidade de valores somados para se produzir um valor maior do que 30 (21 + 22).

Entrada
A entrada contém somente valores inteiros, um por linha, podendo ser positivos ou negativos. O primeiro valor da entrada será o valor de X.
A próxima linha da entrada irá conter Z. Se Z não atender a especificação do problema, ele deverá ser lido novamente, tantas vezes quantas forem necessárias.

Saída
Imprima uma linha com um número inteiro que representa a quantidade de números inteiros que devem ser somadas, de acordo com a especificação acima.

Exemplo de Entrada
3
1
20

Exemplo de Saída
5
*******************************************************************************/

#include <stdio.h>

int main() {
    // Variáveis (Faça um programa que leia dois inteiros: X e Z)
    int X = 0, Z = 0, soma = 0, i = 0, contador = 0;

    // Entrada de Dados (A entrada contém somente valores inteiros, um por linha, podendo ser positivos ou negativos. O primeiro valor da entrada será o valor de X.)
    scanf("%d", &X);
    //A próxima linha da entrada irá conter Z.
    scanf("%d", &Z);
    while(Z < X || Z == X) { //SE Z não atender a especificação do problema, ele deverá ser LIDO NOVAMENTE, tantas VEZES quantas forem necessárias.
        scanf("%d", &Z);
    }
    if(Z > X) {
        for(i = X; i < Z; i++) { // Desenvolvimento (CONTE quantos números inteiros devem ser SOMADOS em SEQUÊNCIA (CONSIDERANDO o X nesta SOMA) para que a SOMA ultrapasse a Z o mínimo possível.)
            if(soma < Z) {
                contador++;
                soma+=i;
            }
            if(soma >= Z) {
                printf("%d\n", contador); //o i é o contador, então onde o contador parar e cumprir com a especificação, é a quantidade de itens que foi necessário ser somado.
                break;
            }
        }
    } 

    return 0;
}