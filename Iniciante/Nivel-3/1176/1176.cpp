/*
 * Beecrowd | 1176 - Fibonacci em Vetor
 * Categoria: Iniciante | Nível 3 | Assunto: Vetores
 * Link: https://judge.beecrowd.com/pt/problems/view/1176
 */

#include <iostream>

using namespace std;



int main() {

    long long soma[61];

    soma[0] = 0;

    soma[1] = 1;



    // Pré-calcula a sequência de Fibonacci até Fib(60)

    for (int i = 2; i <= 60; i++) {

        soma[i] = soma[i - 1] + soma[i - 2];

    }



    int fib;

    cin >> fib;



    for (int j = 0; j < fib; j++) {

        int N;

        cin >> N;

        cout << "Fib(" << N << ") = " << soma[N] << endl;

    }



    return 0;

}

