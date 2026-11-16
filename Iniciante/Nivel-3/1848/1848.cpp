/*
 * Beecrowd | 1848 - Corvo Contador
 * Categoria: Iniciante | Nível 3 | Assunto: Sistemas de numeração
 * Link: https://judge.beecrowd.com/pt/problems/view/1848
 */

#include <iostream>

#include <string>

using namespace std;



int main() {

    int gritos = 0, resultado = 0;

    string corvo;



    while (gritos < 3 && getline(cin, corvo)) {

        if (corvo == "caw caw") {

            cout << resultado << endl;

            resultado = 0;

            gritos++;

        } else {

            int valor = 0;

            for (int i = 0; i < 3; i++) {

                if (corvo[i] == '*') {

                    valor += (1 << (2 - i)); // converte posição em valor binário

                }

            }

            resultado += valor;

        }

    }



    return 0;

}

