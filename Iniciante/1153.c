/******************************************************************************
Ler um valor N. Calcular e escrever seu respectivo fatorial. Fatorial de N = N * (N-1) * (N-2) * (N-3) * ... * 1.

Entrada
A entrada contém um valor inteiro N (0 < N < 13).

Saída
A saída contém um valor inteiro, correspondente ao fatorial de N.

Exemplo de Entrada
4

Exemplo de Saída
24
*******************************************************************************/

#include <stdio.h>

int main() {
    // Variáveis
    int N = 0, i = 0, fatorial = 0, fatorialNovo = 0, soma = 1;

    // Entrada de Dados (Ler um valor N.)
    scanf("%d", &N); //4
    fatorial = N;

    // Desenvolvimento (Calcular: Fatorial de N = N * (N-1) * (N-2) * (N-3) * ... * 1.)
    while(soma != 0) {
        i++;
        soma = N - i;
        if(soma == 0) {
            break;
        } else {
            fatorial = fatorial * soma; //4 * 3 = 12, 12 * 2 = 24, 12 * 1 = 24
        }
    }

    // Saída de Dados (escrever seu respectivo fatorial.)
    printf("%d\n", fatorial);

    return 0;
}