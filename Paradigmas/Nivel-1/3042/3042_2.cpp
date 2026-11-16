/*
 * Beecrowd | 3042 - Desviando de Árvores de Natal
 * Categoria: Paradigmas | Nível 1 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/3042
 */

#include <stdio.h>

#include <stdlib.h>



int main() {

    int M;



    while (scanf("%d", &M) && M != 0) {

        const int INF = 1000000000;



        // Começa no centro

        int dp[3] = {INF, 0, INF};



        for (int i = 0; i < M; i++) {

            int L, C, R;

            scanf("%d %d %d", &L, &C, &R);



            int pista[3] = {L, C, R};

            int novo[3] = {INF, INF, INF};



            for (int destino = 0; destino < 3; destino++) {

                // Se existe árvore nessa pista, não podemos ficar nela

                if (pista[destino] == 1)

                    continue;



                for (int origem = 0; origem < 3; origem++) {

                    int custo = dp[origem] + abs(origem - destino);

                    if (custo < novo[destino]) {

                        novo[destino] = custo;

                    }

                }

            }



            // Atualiza dp

            for (int j = 0; j < 3; j++) {

                dp[j] = novo[j];

            }

        }



        // Encontrar o menor valor em dp

        int menor = dp[0];

        if (dp[1] < menor) menor = dp[1];

        if (dp[2] < menor) menor = dp[2];



        printf("%d\n", menor);

    }



    return 0;

}

