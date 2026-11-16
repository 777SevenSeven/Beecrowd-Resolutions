/*
 * Beecrowd | 2161 - Raiz Quadrada de 10
 * Categoria: Iniciante | Nível 1 | Assunto: Ad hoc, Repetição, Fração c…
 * Link: https://judge.beecrowd.com/pt/problems/view/2161
 */

#include <iostream>

#include <iomanip>



using namespace std;



int main() {



    int n;

    cin >> n;



    double resultado;



    if (n == 0) {

        resultado = 3.0;

    }

    else {



        double valor = 6.0;



        for (int i = 1; i < n; i++) {

            valor = 6.0 + (1.0 / valor);

        }



        resultado = 3.0 + (1.0 / valor);

    }



    cout << fixed << setprecision(10) << resultado << endl;



    return 0;

}