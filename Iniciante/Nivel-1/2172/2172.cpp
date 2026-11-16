/*
 * Beecrowd | 2172 - Evento
 * Categoria: Iniciante | Nível 1 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2172
 */

#include <iostream>



using namespace std;



int main() {

    long long X, M;

    

    while (cin >> X >> M) {

        if (X == 0 && M == 0)

            break;

    

        cout << X * M << endl;

    }

    

    return 0;

}