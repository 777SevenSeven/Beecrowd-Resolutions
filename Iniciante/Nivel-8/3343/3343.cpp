/*
 * Beecrowd | 3343 - Attack On Gasparini
 * Categoria: Iniciante | Nível 8 | Assunto: Ad-Hoc
 * Link: https://judge.beecrowd.com/pt/problems/view/3343
 */

#include <bits/stdc++.h>

using namespace std;



int main() {

    ios::sync_with_stdio(false);

    cin.tie(nullptr);



    int n, x;

    cin >> n >> x;



    string ataque;

    cin >> ataque;



    int p, m, g;

    cin >> p >> m >> g;



    vector<int> walls(n, x);



    int posP = 0;

    int posM = 0;

    int posG = 0;



    for (char titan : ataque) {



        if (titan == 'P') {



            while (walls[posP] < p)

                posP++;



            walls[posP] -= p;



        }

        else if (titan == 'M') {



            while (walls[posM] < m)

                posM++;



            walls[posM] -= m;



        }

        else { // G



            while (walls[posG] < g)

                posG++;



            walls[posG] -= g;

        }

    }



    // Descobre qual foi a última muralha utilizada

    int resposta = max({posP, posM, posG}) + 1;



    cout << resposta << '\n';



    return 0;

}