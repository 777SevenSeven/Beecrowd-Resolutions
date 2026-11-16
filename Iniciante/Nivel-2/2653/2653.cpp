/*
 * Beecrowd | 2653 - Dijkstra
 * Categoria: Iniciante | Nível 2 | Assunto: Sets
 * Link: https://judge.beecrowd.com/pt/problems/view/2653
 */

#include <iostream>

#include <set>

#include <string>



using namespace std;



int main() {



    set<string> joias;

    string joia;



    while (cin >> joia) {

        joias.insert(joia);

    }



    cout << joias.size() << endl;



    return 0;

}