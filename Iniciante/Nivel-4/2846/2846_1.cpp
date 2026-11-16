/*
 * Beecrowd | 2846 - Fibonot
 * Categoria: Iniciante | Nível 4 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2846
 */

#include <iostream>

#include <set>



using namespace std;



int main() {

    int K;

    cin >> K;



    set<long long> fibonacci;



    long long a = 1;

    long long b = 1;



    fibonacci.insert(a);

    fibonacci.insert(b);



    while (b <= 200000) {

        long long c = a + b;

        fibonacci.insert(c);



        a = b;

        b = c;

    }



    int contador = 0;

    long long numero = 1;



    while (contador < K) {

        if (fibonacci.find(numero) == fibonacci.end()) {

            contador++;

        }



        if (contador == K) {

            cout << numero << endl;

            break;

        }



        numero++;

    }



    return 0;

}