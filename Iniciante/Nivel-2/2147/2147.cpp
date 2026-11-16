/*
 * Beecrowd | 2147 - Galopeira
 * Categoria: Iniciante | Nível 2 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2147
 */

#include <iostream>

#include <string>

#include <iomanip>



using namespace std;



int main() {



    int casosTeste;

    cin >> casosTeste;



    for (int i = 0; i < casosTeste; i++) {



        string palavra;

        cin >> palavra;



        double tempo = palavra.length() * 0.01;



        cout << fixed << setprecision(2) << tempo << endl;

    }



    return 0;

}