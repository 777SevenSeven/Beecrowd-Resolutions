/*
 * Beecrowd | 2936 - Quanta Mandioca?
 * Categoria: Iniciante | Nível 1 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2936
 */

#include <iostream>

using namespace std;



int main() {

 

    int Curupira = 0, Boitata = 0, Boto = 0, Mapinguari = 0, Iara = 0, mandiocaNecessaria = 0;

 

    cin >> Curupira;

    cin >> Boitata;

    cin >> Boto;

    cin >> Mapinguari;

    cin >> Iara;

    

    mandiocaNecessaria = (300 * Curupira) + (1500 * Boitata) + (600 * Boto) + (1000 * Mapinguari) + (150 * Iara);

    

    cout << (mandiocaNecessaria + 225) << endl;

    

    return 0;

}