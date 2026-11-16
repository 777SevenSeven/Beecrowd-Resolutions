/*
 * Beecrowd | 1146 - Sequências Crescentes
 * Categoria: Iniciante | Nível 3 | Assunto: Repetição
 * Link: https://judge.beecrowd.com/pt/problems/view/1146
 */

#include <iostream>

using namespace std;



int main() {

    int X;



    while (true) {

        cin >> X;

        if (X == 0) break;



        for (int i = 1; i <= X; i++) {

            cout << i;

            if (i < X) {

                cout << " ";

            }

        }

        cout << endl;

    }



    return 0;

}

