/*
 * Beecrowd | 1101 - Sequência de Números e Soma
 * Categoria: Iniciante | Nível 4 | Assunto: Repetição
 * Link: https://judge.beecrowd.com/pt/problems/view/1101
 */

#include <iostream>

using namespace std;



int main() {

    int M, N;



    while (true) {

        cin >> M >> N;



        if (M <= 0 || N <= 0) {

            break;

        }



        int soma = 0;



        if (M > N) {

            swap(M, N);

        }



        for (int i = M; i <= N; i++) {

            cout << i << " ";

            soma += i;

        }



        cout << "Sum=" << soma << endl;

    }



    return 0;

}

