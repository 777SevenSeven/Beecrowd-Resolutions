/******************************************************************************
O microblog Twitter é conhecido por limitar as postagens em 140 caracteres.
Conferir se um texto vai caber em um tuíte é sua tarefa.

Entrada
A entrada é uma linha de texto T (1 ≤ |T| ≤ 500).

Saída
A saída é dada em uma única linha. Ela deve ser "TWEET" (sem as aspas) se a linha de texto T tem até 140 caracteres.
Se T tem mais de 140 caracteres, a saída deve ser "MUTE".
*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Variáveis
    string texto;
    
    //Entrada de Dados
    getline(cin, texto);
    
    //Desenvolvimento e Saída de dados
    if(texto.length() > 140) {
        cout << "MUTE" << endl;
    } else {
        cout << "TWEET" << endl;
    }
    
    return 0;
}