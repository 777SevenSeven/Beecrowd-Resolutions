/*
 * Beecrowd | 2544 - Kage Bunshin no Jutsu
 * Categoria: Iniciante | Nível 4 | Assunto: Iniciante
 * Link: https://judge.beecrowd.com/pt/problems/view/2544
 */

#include <iostream>



using namespace std;



int main() {



    int n;



    while (cin >> n) {



        int contador = 0;



        while (n > 1) {

            n /= 2;

            contador++;

        }



        cout << contador << endl;

    }



    return 0;

}