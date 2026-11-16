/*
 * Beecrowd | 2003 - Domingo de Manhã
 * Categoria: Iniciante | Nível 2 | Assunto: Iniciante
 * Link: https://judge.beecrowd.com/pt/problems/view/2003
 */

#include <iostream>

using namespace std;



int main() {



    int hora = 0, minuto = 0;

    int atraso = 0;

    int minutosEsperado = 8 * 60;

    int minutos = 0;

    char doisPontos;



    while(cin >> hora >> doisPontos >> minuto) {



        minutos = hora * 60 + minuto;



        atraso = minutos + 60 - minutosEsperado;



        if(atraso < 0) {

            atraso = 0;

        }



        cout << "Atraso maximo: " << atraso << endl;

    }



    return 0;

}