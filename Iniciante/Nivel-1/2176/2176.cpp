/*
 * Beecrowd | 2176 - Paridade
 * Categoria: Iniciante | Nível 1 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2176
 */

#include <iostream>

#include <string>



using namespace std;



int main() {



    string mensagem;

    cin >> mensagem;



    int quantidadeUns = 0;



    for (int i = 0; i < mensagem.length(); i++) {



        if (mensagem[i] == '1') {

            quantidadeUns++;

        }

    }



    if (quantidadeUns % 2 == 0) {

        cout << mensagem << "0" << endl;

    }

    else {

        cout << mensagem << "1" << endl;

    }



    return 0;

}