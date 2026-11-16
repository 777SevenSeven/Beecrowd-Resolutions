/*
 * Beecrowd | 2533 - Estágio
 * Categoria: Iniciante | Nível 3 | Assunto: Iniciante
 * Link: https://judge.beecrowd.com/pt/problems/view/2533
 */

#include <iostream>

#include <iomanip>



using namespace std;



int main() {



    int disciplinas;



    while (cin >> disciplinas) {



        double notaIRACima = 0;

        double notaIRABaixo = 0;



        for (int i = 0; i < disciplinas; i++) {



            int notaDisciplina;

            int cargaHoraria;



            cin >> notaDisciplina >> cargaHoraria;



            notaIRACima += notaDisciplina * cargaHoraria;

            notaIRABaixo += cargaHoraria * 100;

        }



        double notaIRA = notaIRACima / notaIRABaixo;



        cout << fixed << setprecision(4) << notaIRA << endl;

    }



    return 0;

}