/*
 * Beecrowd | 1010 - Cálculo Simples
 * Categoria: Iniciante | Nível 3 | Assunto: Sequencial
 * Link: https://judge.beecrowd.com/pt/problems/view/1010
 */

#include <iostream>

#include <iomanip>

using namespace std;



int main() {

    int codigo1 = 0, quantidade1 = 0, codigo2 = 0, quantidade2 = 0;

    double valor1 = 0, valor2 = 0, valorT = 0;



    cin >> codigo1 >> quantidade1 >> valor1;

    cin >> codigo2 >> quantidade2 >> valor2;



    valorT = (quantidade1 * valor1) + (quantidade2 * valor2);



    cout << fixed << setprecision(2);

    cout << "VALOR A PAGAR: R$ " << valorT << endl;



    return 0;

}

