/*
 * Beecrowd | 2749 - Saída 3
 * Categoria: Iniciante | Nível 2 | Assunto: Saída
 * Link: https://judge.beecrowd.com/pt/problems/view/2749
 */

#include <iostream>

#include <string>

using namespace std;



int main()

{

    cout << "---------------------------------------" << endl;



    string linha(39, ' ');



    linha[0] = '|';

    linha[38] = '|';

    linha.replace(1, 6, "x = 35");

    cout << linha << endl;



    linha = string(39, ' ');

    linha[0] = '|';

    linha[38] = '|';

    cout << linha << endl;



    linha = string(39, ' ');

    linha[0] = '|';

    linha[38] = '|';

    linha.replace(16, 6, "x = 35");

    cout << linha << endl;



    linha = string(39, ' ');

    linha[0] = '|';

    linha[38] = '|';

    cout << linha << endl;



    linha = string(39, ' ');

    linha[0] = '|';

    linha[38] = '|';

    linha.replace(32, 6, "x = 35");

    cout << linha << endl;



    cout << "---------------------------------------" << endl;



    return 0;

}