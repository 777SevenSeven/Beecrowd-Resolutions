/*
 * Beecrowd | 2139 - Natal de Pedrinho
 * Categoria: Iniciante | Nível 2 | Assunto: Ad-hoc
 * Link: https://judge.beecrowd.com/pt/problems/view/2139
 */

#include <iostream>



using namespace std;



int main() {



    int diasMes[] = {

        31, 29, 31, 30, 31, 30,

        31, 31, 30, 31, 30, 31

    };



    int mes, dia;



    while (cin >> mes >> dia) {



        int diaDoAno = dia;



        for (int i = 0; i < mes - 1; i++) {

            diaDoAno += diasMes[i];

        }



        if (diaDoAno == 360) {

            cout << "E natal!" << endl;

        }

        else if (diaDoAno == 359) {

            cout << "E vespera de natal!" << endl;

        }

        else if (diaDoAno > 360) {

            cout << "Ja passou!" << endl;

        }

        else {

            cout << "Faltam " << 360 - diaDoAno

                 << " dias para o natal!" << endl;

        }

    }



    return 0;

}