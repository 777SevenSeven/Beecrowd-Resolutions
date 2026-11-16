/*
 * Beecrowd | 2626 - Turma do JB6
 * Categoria: Iniciante | Nível 4
 * Link: https://judge.beecrowd.com/pt/problems/view/2626
 */

#include <iostream>

#include <string>



using namespace std;



bool ganha(string x, string y) {

    return (x == "pedra" && y == "tesoura") ||

    (x == "tesoura" && y == "papel") ||

    (x == "papel" && y == "pedra");

}



int main() {

string A, B, C;



while (cin >> A >> B >> C) {



    if (ganha(A, B) && ganha(A, C)) {

        cout << "Os atributos dos monstros vao ser inteligencia, sabedoria..." << endl;

    }

    else if (ganha(B, A) && ganha(B, C)) {

        cout << "Iron Maiden's gonna get you, no matter how far!" << endl;

    }

    else if (ganha(C, A) && ganha(C, B)) {

        cout << "Urano perdeu algo muito precioso..." << endl;

    }

    else {

        cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;

        }

}



    return 0;

}