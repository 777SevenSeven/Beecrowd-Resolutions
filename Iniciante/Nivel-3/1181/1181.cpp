/*
 * Beecrowd | 1181 - Linha na Matriz
 * Categoria: Iniciante | Nível 3 | Assunto: Matrizes
 * Link: https://judge.beecrowd.com/pt/problems/view/1181
 */

#include <iostream>

#include <iomanip>

using namespace std;



int main() {

    int L;

    char tipoDeOperacao;

    double matriz[12][12], resultado = 0.0;



    // Entrada

    cin >> L; 

    cin >> tipoDeOperacao;



    for (int i = 0; i < 12; i++) {

        for (int j = 0; j < 12; j++) {

            cin >> matriz[i][j];

            if (i == L) {

                resultado += matriz[i][j];

            }

        }

    }



    // Saída

    cout << fixed << setprecision(1);

    if (tipoDeOperacao == 'S') {

        cout << resultado << endl;

    } else if (tipoDeOperacao == 'M') {

        cout << resultado / 12.0 << endl;

    }



    return 0;

}

