/*
 * Beecrowd | 2235 - Andando no Tempo
 * Categoria: Iniciante | Nível 1 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2235
 */

#include <iostream>



using namespace std;



int main() {



    int A, B, C;



    cin >> A >> B >> C;



    if (A == B || A == C || B == C ||

        A + B == C || A + C == B || B + C == A) {



        cout << "S" << endl;



    } else {



        cout << "N" << endl;

    }



    return 0;

}