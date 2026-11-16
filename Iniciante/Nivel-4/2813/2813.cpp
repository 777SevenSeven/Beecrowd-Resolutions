/*
 * Beecrowd | 2813 - Evitando Chuva
 * Categoria: Iniciante | Nível 4 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2813
 */

#include <iostream>

#include <string>



using namespace std;



int main() {

    int N;

    cin >> N;



    int casa = 0;

    int escritorio = 0;



    int comprouCasa = 0;

    int comprouEscritorio = 0;



    for (int i = 0; i < N; i++) {

        string ida, volta;

        cin >> ida >> volta;



        // Ida: casa -> escritório

        if (ida == "chuva") {

            if (casa == 0) {

                casa++;

                comprouCasa++;

            }



            casa--;

            escritorio++;

        }



        // Volta: escritório -> casa

        if (volta == "chuva") {

            if (escritorio == 0) {

                escritorio++;

                comprouEscritorio++;

            }



            escritorio--;

            casa++;

        }

    }



    cout << comprouCasa << " " << comprouEscritorio << endl;



    return 0;

}