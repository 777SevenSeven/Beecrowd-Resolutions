/*
 * Beecrowd | 2712 - Rodízio Veicular
 * Categoria: Iniciante | Nível 4
 * Link: https://judge.beecrowd.com/pt/problems/view/2712
 */

#include <iostream>

#include <string>



using namespace std;



int main() {



    int casosTeste;

    cin >> casosTeste;



    for (int i = 0; i < casosTeste; i++) {



        string placa;

        cin >> placa;



        bool valida = true;



        // A placa precisa ter exatamente 8 caracteres

        if (placa.length() != 8) {

            valida = false;

        }



        // O hífen precisa estar na posição 3

        if (valida && placa[3] != '-') {

            valida = false;

        }



        // Posições 0, 1 e 2 precisam ser letras maiúsculas

        if (valida) {

            for (int j = 0; j < 3; j++) {

                char caractere = placa[j];



                if (caractere < 'A' || caractere > 'Z') {

                    valida = false;

                }

            }

        }



        // Posições 4, 5, 6 e 7 precisam ser números

        if (valida) {

            for (int j = 4; j < 8; j++) {

                char caractere = placa[j];



                if (caractere < '0' || caractere > '9') {

                    valida = false;

                }

            }

        }



        // Se a placa for inválida

        if (!valida) {

            cout << "FAILURE" << endl;

            continue;

        }



        // Se a placa for válida, olha o último dígito

        char ultimo = placa[placa.length() - 1];



        if (ultimo == '1' || ultimo == '2') {

            cout << "MONDAY" << endl;

        }

        else if (ultimo == '3' || ultimo == '4') {

            cout << "TUESDAY" << endl;

        }

        else if (ultimo == '5' || ultimo == '6') {

            cout << "WEDNESDAY" << endl;

        }

        else if (ultimo == '7' || ultimo == '8') {

            cout << "THURSDAY" << endl;

        }

        else if (ultimo == '9' || ultimo == '0') {

            cout << "FRIDAY" << endl;

        }

    }



    return 0;

}