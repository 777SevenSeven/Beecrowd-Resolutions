/*
 * Beecrowd | 2987 - Balão de Honra
 * Categoria: Iniciante | Nível 1 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2987
 */

#include <iostream>

using namespace std;

 

int main() {

    

    string alfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    char L;

 

    cin >> L;

    

    size_t posicao = alfabeto.find(L);

    

    cout << posicao + 1 << endl;

 

    return 0;

}