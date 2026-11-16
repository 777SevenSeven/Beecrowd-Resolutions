/*
 * Beecrowd | 3084 - Relógio Antigo
 * Categoria: Iniciante | Nível 5 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/3084
 */

#include <iostream>

#include <iomanip>

using namespace std;



int main() {



    int h, m;



    while (cin >> h >> m) {

        h = h / 30;

        m = m / 6;



        cout << setfill('0') << setw(2) << h << ":"

             << setfill('0') << setw(2) << m << endl;

    }



    return 0;

}

