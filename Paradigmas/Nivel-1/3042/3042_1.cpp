/*
 * Beecrowd | 3042 - Desviando de Árvores de Natal
 * Categoria: Paradigmas | Nível 1 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/3042
 */

#include <bits/stdc++.h>

using namespace std;



int main() {

    ios::sync_with_stdio(false);

    cin.tie(nullptr);



    int M;



    while (cin >> M && M != 0) {

        const int INF = 1e9;



        // Começa no centro

        vector<int> dp = {INF, 0, INF};



        for (int i = 0; i < M; i++) {

            int L, C, R;

            cin >> L >> C >> R;



            vector<int> pista = {L, C, R};

            vector<int> novo = {INF, INF, INF};



            for (int destino = 0; destino < 3; destino++) {



                // Se existe árvore nessa pista, não podemos ficar nela

                if (pista[destino] == 1)

                    continue;



                for (int origem = 0; origem < 3; origem++) {

                    novo[destino] = min(

                        novo[destino],

                        dp[origem] + abs(origem - destino)

                    );

                }

            }



            dp = novo;

        }



        cout << *min_element(dp.begin(), dp.end()) << '\n';

    }



    return 0;

}