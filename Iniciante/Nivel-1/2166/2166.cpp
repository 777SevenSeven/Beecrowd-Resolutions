/*
 * Beecrowd | 2166 - Raiz Quadrada de 2
 * Categoria: Iniciante | Nível 1 | Assunto: Ad hoc, Repetição, Fração c…
 * Link: https://judge.beecrowd.com/pt/problems/view/2166
 */

#include <iostream>

#include <iomanip>



using namespace std;



int main() {



    int n;

    cin >> n;



    double resultado;



    if (n == 0) {

        resultado = 1.0;

    }

    else {



        double valor = 2.0;



        for (int i = 1; i < n; i++) {

            valor = 2.0 + (1.0 / valor);

        }



        resultado = 1.0 + (1.0 / valor);

    }



    cout << fixed << setprecision(10) << resultado << endl;



    return 0;

}