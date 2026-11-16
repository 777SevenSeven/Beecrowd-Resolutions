/*
 * Beecrowd | 2808 - Mais Cavalos
 * Categoria: Iniciante | Nível 3 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2808
 */

#include <iostream>

#include <string>

#include <cstdlib>



using namespace std;



int main() {

    string origem, destino;



    cin >> origem >> destino;



    int colunaOrigem = origem[0] - 'a';

    int linhaOrigem = origem[1] - '0';



    int colunaDestino = destino[0] - 'a';

    int linhaDestino = destino[1] - '0';



    int diferencaColuna = abs(colunaOrigem - colunaDestino);

    int diferencaLinha = abs(linhaOrigem - linhaDestino);



    if ((diferencaColuna == 2 && diferencaLinha == 1) ||

        (diferencaColuna == 1 && diferencaLinha == 2)) {

        cout << "VALIDO" << endl;

    } else {

        cout << "INVALIDO" << endl;

    }



    return 0;

}