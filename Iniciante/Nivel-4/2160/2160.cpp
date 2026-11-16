/*
 * Beecrowd | 2160 - Nome no Formulário
 * Categoria: Iniciante | Nível 4 | Assunto: Ad hoc, Fgets, String
 * Link: https://judge.beecrowd.com/pt/problems/view/2160
 */

/******************************************************************************

Preencher formulários é uma tarefa simples.

Mas é preciso conferir se o espaço reservado para os dados é suficiente.



Sua tarefa é, dada uma linha de texto, indicar se ele cabe ou não cabe em um formulário com 80 caracteres.



Entrada

A entrada é uma linha de texto L (1 ≤ |L| ≤ 500).



Saída

A saída é dada em uma única linha.

Ela deve ser "YES" (sem as aspas) se a linha de texto L tem até 80 caracteres.

Se L tem mais de 80 caracteres, a saída deve ser "NO".



*******************************************************************************/

#include <iostream>

#include <string>

using namespace std;



int main()

{

    //Variáveis

    string texto;

    

    //Entrada de dados

    getline(cin, texto);

    

    //Desenvolvimento e saída de dados

    if(texto.length() > 80) {

        cout << "NO" << endl;

    } else {

        cout << "YES" << endl;

    }



    return 0;

}