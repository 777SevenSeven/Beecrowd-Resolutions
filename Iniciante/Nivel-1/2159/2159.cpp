/*
 * Beecrowd | 2159 - Número Aproximado de Primos
 * Categoria: Iniciante | Nível 1 | Assunto: Ad hoc, Biblioteca matemáti…
 * Link: https://judge.beecrowd.com/pt/problems/view/2159
 */

#include <iostream>

#include <cmath>

#include <iomanip>



using namespace std;



int main() {



    double n;

    cin >> n;



    double P = n / log(n);

    double M = 1.25506 * (n / log(n));



    cout << fixed << setprecision(1) << P << " " << M << endl;



    return 0;

}