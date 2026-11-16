/*
 * Beecrowd | 2221 - Batalha de Pomekons
 * Categoria: Iniciante | Nível 2 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2221
 */

#include <iostream>



using namespace std;



int main() {



    int bonus = 0, valorGolpe = 0, valorGolpe2 = 0;

    int valorAtaque = 0, valorDefesa = 0, levelTreinador = 0;

    int valorAtaque2 = 0, valorDefesa2 = 0, levelTreinador2 = 0;



    int instancia;

    cin >> instancia;



    for (int i = 0; i < instancia; i++) {



        cin >> bonus;



        cin >> valorAtaque;

        cin >> valorDefesa;

        cin >> levelTreinador;



        cin >> valorAtaque2;

        cin >> valorDefesa2;

        cin >> levelTreinador2;



        valorGolpe = (valorAtaque + valorDefesa) / 2;

        valorGolpe2 = (valorAtaque2 + valorDefesa2) / 2;



        if (levelTreinador % 2 == 0) {

            valorGolpe += bonus;

        }



        if (levelTreinador2 % 2 == 0) {

            valorGolpe2 += bonus;

        }



        if (valorGolpe > valorGolpe2) {

            cout << "Dabriel" << endl;

        }

        else if (valorGolpe2 > valorGolpe) {

            cout << "Guarte" << endl;

        }

        else {

            cout << "Empate" << endl;

        }

    }



    return 0;

}