/*
 * Beecrowd | 3303 - Palavrão
 * Categoria: Iniciante | Nível 1 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/3303
 */

#include <iostream>

using namespace std;



int main() {

    string palavra;

    

    cin >> palavra;

    if(palavra.size() >= 10)

        cout << "palavrao" << endl;

    else

        cout << "palavrinha" << endl;

 

    return 0;

}