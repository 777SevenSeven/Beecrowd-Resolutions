/*
 * Beecrowd | 2786 - Piso da Escola
 * Categoria: Iniciante | Nível 1 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2786
 */

#include <iostream>



using namespace std;



int main() {



    int L, C;



    cin >> L;

    cin >> C;



    int tipo1 = 2 * L * C - L - C + 1;

    int tipo2 = 2 * (L + C - 2);



    cout << tipo1 << endl;

    cout << tipo2 << endl;



    return 0;

}