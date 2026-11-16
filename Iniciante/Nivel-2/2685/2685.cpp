/*
 * Beecrowd | 2685 - A Mudança
 * Categoria: Iniciante | Nível 2
 * Link: https://judge.beecrowd.com/pt/problems/view/2685
 */

#include <iostream>



using namespace std;



int main() {



    int M;



    while (cin >> M) {



        if (M == 360 || (M >= 0 && M < 90)) {

            cout << "Bom Dia!!" << endl;

        }

        else if (M < 180) {

            cout << "Boa Tarde!!" << endl;

        }

        else if (M < 270) {

            cout << "Boa Noite!!" << endl;

        }

        else {

            cout << "De Madrugada!!" << endl;

        }

    }



    return 0;

}