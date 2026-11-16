/*
 * Beecrowd | 2802 - Dividindo Círculos
 * Categoria: Iniciante | Nível 5 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2802
 */

#include <iostream>



using namespace std;



int main() {

    long long N;

    cin >> N;



    long long segmentos = N * (N - 1) / 2;



    long long cruzamentos = 0;



    if (N >= 4) {

        cruzamentos = N * (N - 1) * (N - 2) * (N - 3) / 24;

    }



    long long regioes = 1 + segmentos + cruzamentos;



    cout << regioes << endl;



    return 0;

}