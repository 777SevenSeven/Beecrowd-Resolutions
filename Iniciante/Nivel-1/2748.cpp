/*
 * Beecrowd | 2748 - Saída 2
 * Categoria: Iniciante | Nível 1 | Assunto: Saída
 * Link: https://judge.beecrowd.com/pt/problems/view/2748
 */

#include <iostream>

#include <string>

using namespace std;



int main()

{

    cout << "---------------------------------------" << endl;



    string linha(39, ' ');



    // Roberto

    linha[0] = '|';

    linha[38] = '|';

    linha.replace(9, 7, "Roberto");

    cout << linha << endl;



    // Linha vazia

    linha = string(39, ' ');

    linha[0] = '|';

    linha[38] = '|';

    cout << linha << endl;



    // 5786

    linha = string(39, ' ');

    linha[0] = '|';

    linha[38] = '|';

    linha.replace(9, 4, "5786");

    cout << linha << endl;



    // Linha vazia

    linha = string(39, ' ');

    linha[0] = '|';

    linha[38] = '|';

    cout << linha << endl;



    // UNIFEI

    linha = string(39, ' ');

    linha[0] = '|';

    linha[38] = '|';

    linha.replace(9, 6, "UNIFEI");

    cout << linha << endl;



    cout << "---------------------------------------" << endl;



    return 0;

}