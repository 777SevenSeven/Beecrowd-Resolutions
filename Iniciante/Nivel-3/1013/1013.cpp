/*
 * Beecrowd | 1013 - O Maior
 * Categoria: Iniciante | Nível 3 | Assunto: Sequencial
 * Link: https://judge.beecrowd.com/pt/problems/view/1013
 */

#include <iostream>

#include <cmath>

using namespace std;



int main() {

    int a, b, c, maior;

    cin >> a >> b >> c;



    maior = (a + b + abs(a - b)) / 2;

    maior = (maior + c + abs(maior - c)) / 2;



    cout << maior << " eh o maior" << endl;



    return 0;

}

