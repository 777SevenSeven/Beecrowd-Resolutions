/*
 * Beecrowd | 2982 - A Greve para ou Continua?
 * Categoria: Iniciante | Nível 3 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2982
 */

#include <iostream>

using namespace std;



int main() {



    int casosTeste = 0, valor = 0, gasto = 0, verba = 0;

    char GastoVerba;



    cin >> casosTeste;



    for (int i = 0; i < casosTeste; i++) {

        cin >> GastoVerba >> valor;



        if (GastoVerba == 'G') {

            gasto += valor;

        } else {

            verba += valor;

        }

    }



    if (gasto > verba) {

        cout << "NAO VAI TER CORTE, VAI TER LUTA!" << endl;

    } else {

        cout << "A greve vai parar." << endl;

    }



    return 0;

}

