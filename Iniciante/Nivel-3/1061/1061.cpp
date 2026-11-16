/*
 * Beecrowd | 1061 - Tempo de um Evento
 * Categoria: Iniciante | Nível 3 | Assunto: Seleção
 * Link: https://judge.beecrowd.com/pt/problems/view/1061
 */

#include <iostream>

#include <string>

using namespace std;



int main() {

    string dummy;

    int diaAtual, horaAtual, minutoAtual, segundoAtual;

    int diaFuturo, horaFutura, minutoFuturo, segundoFuturo;



    // Entrada de Dados

    cin >> dummy >> diaAtual;

    cin >> horaAtual >> dummy >> minutoAtual >> dummy >> segundoAtual;



    cin >> dummy >> diaFuturo;

    cin >> horaFutura >> dummy >> minutoFuturo >> dummy >> segundoFuturo;



    // Converter tudo para segundos

    long long totalSegundosInicio = (diaAtual * 86400) + (horaAtual * 3600) + (minutoAtual * 60) + segundoAtual;

    long long totalSegundosFim = (diaFuturo * 86400) + (horaFutura * 3600) + (minutoFuturo * 60) + segundoFuturo;



    long long diferencaTotal = totalSegundosFim - totalSegundosInicio;



    // Converter de volta

    int diaPassados = diferencaTotal / 86400;

    diferencaTotal %= 86400;



    int horasPassadas = diferencaTotal / 3600;

    diferencaTotal %= 3600;



    int minutosPassados = diferencaTotal / 60;

    int segundosPassados = diferencaTotal % 60;



    // Saída

    cout << diaPassados << " dia(s)" << endl;

    cout << horasPassadas << " hora(s)" << endl;

    cout << minutosPassados << " minuto(s)" << endl;

    cout << segundosPassados << " segundo(s)" << endl;



    return 0;

}

