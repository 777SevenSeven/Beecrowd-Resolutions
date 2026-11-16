/*
 * Beecrowd | 2780 - Basquete de Robôs
 * Categoria: Iniciante | Nível 1 | Assunto: Seleção
 * Link: https://judge.beecrowd.com/pt/problems/view/2780
 */

#include <iostream>

using namespace std;

 

int main() {

int distancia = 0, pontuacao = 0;

 

    cin >> distancia;

    

    if(distancia >= 0 && distancia <= 800) {

        pontuacao = 1;

    } else if(distancia >= 800 && distancia <= 1400) {

        pontuacao = 2;

    } else {

        pontuacao = 3;

    }

    

    cout << pontuacao << endl;

 

    return 0;

}