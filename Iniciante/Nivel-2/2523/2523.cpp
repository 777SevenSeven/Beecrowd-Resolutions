/*
 * Beecrowd | 2523 - A Mensagem de Will
 * Categoria: Iniciante | Nível 2 | Assunto: Iniciante
 * Link: https://judge.beecrowd.com/pt/problems/view/2523
 */

#include <iostream>

#include <string>



using namespace std;



int main() {



    string letras;

    int n;



    while (cin >> letras) {



        cin >> n;



        for (int i = 0; i < n; i++) {



            int lampada;

            cin >> lampada;



            cout << letras[lampada - 1];

        }



        cout << endl;

    }



    return 0;

}