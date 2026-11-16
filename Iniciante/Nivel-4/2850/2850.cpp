/*
 * Beecrowd | 2850 - Papagaio Poliglota
 * Categoria: Iniciante | Nível 4
 * Link: https://judge.beecrowd.com/pt/problems/view/2850
 */

#include <iostream>

#include <string>

using namespace std;



int main() {

    string perna;



    while (getline(cin, perna)) {

        if (perna == "esquerda") {

            cout << "ingles" << endl;

        } else if (perna == "direita") {

            cout << "frances" << endl;

        } else if (perna == "nenhuma") {

            cout << "portugues" << endl;

        } else {

            cout << "caiu" << endl;

        }

    }



    return 0;

}

