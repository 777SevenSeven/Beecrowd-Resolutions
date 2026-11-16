/*
 * Beecrowd | 1958 - Notação Científica
 * Categoria: Iniciante | Nível 4 | Assunto: Ad-Hoc, Opções do Printf
 * Link: https://judge.beecrowd.com/pt/problems/view/1958
 */

#include <iostream>

#include <iomanip>

using namespace std;



int main() {

    double X;

    cin >> X;



    cout << uppercase << showpos << scientific << setprecision(4);

    cout << X << endl;



    return 0;

}

