/*
 * Beecrowd | 2670 - Máquina de Café
 * Categoria: Iniciante | Nível 3 | Assunto: Seleção
 * Link: https://judge.beecrowd.com/pt/problems/view/2670
 */

#include <iostream>

#include <algorithm>



using namespace std;



int main() {



    int A1, A2, A3;



    cin >> A1;

    cin >> A2;

    cin >> A3;



    int andar1 = A2 * 2 + A3 * 4;

    int andar2 = A1 * 2 + A3 * 2;

    int andar3 = A1 * 4 + A2 * 2;



    int menor = min(andar1, min(andar2, andar3));



    cout << menor << endl;



    return 0;

}