/*
 * Beecrowd | 2968 - Hora da Corrida
 * Categoria: Iniciante | Nível 5 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2968
 */

#include <bits/stdc++.h>

using namespace std;



int main() {

    ios::sync_with_stdio(false);

    cin.tie(nullptr);



    long long V, N;

    cin >> V >> N;



    long long total = V * N;



    for (int p = 10; p <= 90; p += 10) {

        long long resposta = (total * p + 99) / 100;



        cout << resposta;



        if (p < 90)

            cout << ' ';

    }



    cout << '\n';



    return 0;

}