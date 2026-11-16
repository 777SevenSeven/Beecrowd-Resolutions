/*
 * Beecrowd | 2313 - Qual Triângulo
 * Categoria: Iniciante | Nível 3 | Assunto: Seleção
 * Link: https://judge.beecrowd.com/pt/problems/view/2313
 */

#include <iostream>

using namespace std;



int main() {

    int A, B, C;

    cin >> A >> B >> C;



    // Verifica se é um triângulo válido

    if (A + B > C && B + C > A && C + A > B) {

        // Classificação do triângulo

        if (A == B && B == C) {

            cout << "Valido-Equilatero" << endl;

        } else if (A != B && B != C && A != C) {

            cout << "Valido-Escaleno" << endl;

        } else {

            cout << "Valido-Isoceles" << endl;

        }



        // Verifica se é retângulo (Teorema de Pitágoras)

        if (A * A == B * B + C * C ||

            B * B == A * A + C * C ||

            C * C == A * A + B * B) {

            cout << "Retangulo: S" << endl;

        } else {

            cout << "Retangulo: N" << endl;

        }

    } else {

        cout << "Invalido" << endl;

    }



    return 0;

}

