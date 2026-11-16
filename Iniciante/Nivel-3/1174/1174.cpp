/*
 * Beecrowd | 1174 - Seleçao em Vetor I
 * Categoria: Iniciante | Nível 3 | Assunto: Vetores
 * Link: https://judge.beecrowd.com/pt/problems/view/1174
 */

#include <iostream>

#include <iomanip>

using namespace std;



int main() {

    const int TAM = 100;

    double vetor[TAM];



    // Entrada de Dados

    for (int i = 0; i < TAM; i++) {

        cin >> vetor[i];

    }



    // Processamento e Saída

    for (int j = 0; j < TAM; j++) {

        if (vetor[j] <= 10.0) {

            cout << fixed << setprecision(1);

            cout << "A[" << j << "] = " << vetor[j] << endl;

        }

    }



    return 0;

}

