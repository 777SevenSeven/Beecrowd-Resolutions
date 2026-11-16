/*
 * Beecrowd | 2762 - Entrada e Saída 6
 * Categoria: Iniciante | Nível 2 | Assunto: Entrada e Saída 6
 * Link: https://judge.beecrowd.com/pt/problems/view/2762
 */

/******************************************************************************



*******************************************************************************/

#include <iostream>

using namespace std;



int main()

{

    //Variáveis

    string A, B; 

    

    //Entrada de Dados

    getline(cin, A, '.');

    getline(cin, B);

    

    //Desenvolvimento de Dados

    int AConvertido = stoi(A);

    int BConvertido = stoi(B);

    

    //Saída de Dados

    cout << BConvertido << '.' << AConvertido << endl;

    

    return 0;

}