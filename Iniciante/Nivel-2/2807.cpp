/*
 * Beecrowd | 2807 - Iccanobif
 * Categoria: Iniciante | Nível 2 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2807
 */

#include <iostream>

#include <vector>



using namespace std;



int main() {

    int N;

    cin >> N;



    vector<int> sequencia;



    int a = 1;

    int b = 1;



    sequencia.push_back(1);



    if (N >= 2)

        sequencia.push_back(1);



    for (int i = 2; i < N; i++) {

        int c = a + b;



        sequencia.push_back(c);



        a = b;

        b = c;

    }



    for (int i = N - 1; i >= 0; i--) {

        cout << sequencia[i];



        if (i != 0)

            cout << " ";

    }



    cout << endl;



    return 0;

}