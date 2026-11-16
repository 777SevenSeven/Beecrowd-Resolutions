/*
 * Beecrowd | 3089 - Presentes de Natal
 * Categoria: Iniciante | Nível 7 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/3089
 */

#include <bits/stdc++.h>

using namespace std;



int main() {

    ios::sync_with_stdio(false);

    cin.tie(nullptr);



    int n;



    while (cin >> n && n != 0) {

        vector<long long> presentes(2 * n);



        for (int i = 0; i < 2 * n; i++) {

            cin >> presentes[i];

        }



        long long maior = 0;

        long long menor = LLONG_MAX;



        for (int i = 0; i < n; i++) {

            long long soma = presentes[i] + presentes[2 * n - 1 - i];



            maior = max(maior, soma);

            menor = min(menor, soma);

        }



        cout << maior << ' ' << menor << '\n';

    }



    return 0;

}