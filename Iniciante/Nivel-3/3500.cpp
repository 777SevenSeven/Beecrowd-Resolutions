/*
 * Beecrowd | 3500 - Inversão de Número
 * Categoria: Iniciante | Nível 3 | Assunto: Sequencial
 * Link: https://judge.beecrowd.com/pt/problems/view/3500
 */

/******************************************************************************

Leia um número com 3 dígitos e imprima ele invertido.



Samples Input	Samples Output

489



                Invertido = 984



513



                Invertido = 315

*******************************************************************************/

#include <iostream>

#include <algorithm>

#include <string>

using namespace std;



int main() {

    string palavra;

    cin >> palavra;

    reverse(palavra.begin(), palavra.end());

    cout << "Invertido = " << palavra << endl; 

    return 0;

}



