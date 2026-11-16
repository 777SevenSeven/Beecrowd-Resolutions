/*
 * Beecrowd | 3140 - Copiando e Colando Código
 * Categoria: Iniciante | Nível 1 | Assunto: Leitura e escrita
 * Link: https://judge.beecrowd.com/pt/problems/view/3140
 */

#include <iostream>

using namespace std;



int main() {



    string linha;

    bool dentroBody = false;



    while (getline(cin, linha)) {



        if (linha.find("<body>") != string::npos) {

            dentroBody = true;

            continue;

        }



        if (linha.find("</body>") != string::npos) {

            dentroBody = false;

            continue;

        }



        if (dentroBody) {

            cout << linha << endl;

        }

    }



    return 0;

}

