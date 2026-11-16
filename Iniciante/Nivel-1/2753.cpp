/*
 * Beecrowd | 2753 - Saída 7
 * Categoria: Iniciante | Nível 1 | Assunto: Saída
 * Link: https://judge.beecrowd.com/pt/problems/view/2753
 */

#include <iostream>

using namespace std;



int main()

{

    int letra = 97;



    for (int i = 0; i < 26; i++)

    {

        cout << letra << " e " << char(letra) << endl;

        letra++;

    }



    return 0;

}