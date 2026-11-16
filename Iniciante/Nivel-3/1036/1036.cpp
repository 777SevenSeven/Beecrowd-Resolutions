/*
 * Beecrowd | 1036 - Fórmula de Bhaskara
 * Categoria: Iniciante | Nível 3 | Assunto: Seleção
 * Link: https://judge.beecrowd.com/pt/problems/view/1036
 */

#include <iostream>

#include <iomanip>

#include <cmath>

using namespace std;



int main() {

    double A, B, C;

    cin >> A >> B >> C;



    double delta = B * B - 4 * A * C;



    if (A == 0 || delta < 0) {

        cout << "Impossivel calcular" << endl;

    } else {

        double R1 = (-B + sqrt(delta)) / (2 * A);

        double R2 = (-B - sqrt(delta)) / (2 * A);



        cout << fixed << setprecision(5);

        cout << "R1 = " << R1 << endl;

        cout << "R2 = " << R2 << endl;

    }



    return 0;

}

