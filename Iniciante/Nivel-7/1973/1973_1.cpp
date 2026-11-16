/*
 * Beecrowd | 1973 - Jornada nas Estrelas
 * Categoria: Iniciante | Nível 7 | Assunto: Simulação
 * Link: https://judge.beecrowd.com/pt/problems/view/1973
 */

#include <bits/stdc++.h>

using namespace std;



int main() {

    ios::sync_with_stdio(false);

    cin.tie(nullptr);



    int N;

    cin >> N;



    vector<long long> carneiros(N);

    vector<bool> visitada(N, false);



    long long total = 0;



    for (int i = 0; i < N; i++) {

        cin >> carneiros[i];

        total += carneiros[i];

    }



    int pos = 0;

    long long atacadas = 0;



    while (pos >= 0 && pos < N) {



        // Conta a estrela apenas na primeira vez que é visitada

        if (!visitada[pos]) {

            visitada[pos] = true;

            atacadas++;

        }



        // Guarda a quantidade ANTES do roubo,

        // pois ela determina a direção

        long long antes = carneiros[pos];



        // Rouba 1 se houver carneiro

        if (carneiros[pos] > 0) {

            carneiros[pos]--;

            total--;

        }



        // Direção depende da quantidade ANTES do roubo

        if (antes % 2 == 1)

            pos++;

        else

            pos--;

    }



    cout << atacadas << ' ' << total << '\n';



    return 0;

}