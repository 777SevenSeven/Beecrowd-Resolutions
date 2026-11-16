#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M;
    int valor;
    int linhaJogador = 0, colunaJogador = 0;
    int linhaMonstro = 0, colunaMonstro = 0;
    int menorTempo = 0;

    // Entrada de Dados
    while (scanf("%d %d", &N, &M) == 2) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                scanf("%d", &valor);

                if (valor == 1) {
                    linhaJogador = i;
                    colunaJogador = j;
                } else if (valor == 2) {
                    linhaMonstro = i;
                    colunaMonstro = j;
                }
            }
        }

        // Desenvolvimento de Dados
        menorTempo = abs(linhaJogador - linhaMonstro) +
                     abs(colunaJogador - colunaMonstro);

        // Saída de Dados
        printf("%d\n", menorTempo);
    }

    return 0;
}
