/*
 * Beecrowd | 1118 - Várias Notas Com Validação
 * Categoria: Iniciante | Nível 3 | Assunto: Repetição
 * Link: https://judge.beecrowd.com/pt/problems/view/1118
 */

#include <iostream>

#include <iomanip>

using namespace std;



int main() {

    double nota, media, soma;

    int contador, opcao;



    while (true) {

        soma = 0.0;

        contador = 0;



        // Lê duas notas válidas

        while (contador < 2) {

            cin >> nota;

            if (nota < 0.0 || nota > 10.0) {

                cout << "nota invalida" << endl;

            } else {

                soma += nota;

                contador++;

            }

        }



        media = soma / 2.0;

        cout << fixed << setprecision(2);

        cout << "media = " << media << endl;



        // Menu de novo cálculo

        cout << "novo calculo (1-sim 2-nao)" << endl;

        cin >> opcao;

        while (opcao != 1 && opcao != 2) {

            cout << "novo calculo (1-sim 2-nao)" << endl;

            cin >> opcao;

        }



        if (opcao == 2) {

            break;

        }

    }



    return 0;

}

