/******************************************************************************
O seu professor gostaria de fazer um programa com as seguintes características:

Leia 10 nomes, sem espaço em branco;
Imprima o terceiro nome da lista;
Imprima o sétimo nome da lista;
Imprima o nono nome da lista.
Entrada
A entrada consiste vários arquivos de teste.
Em cada arquivo de teste tem dez linhas.
Em cada linha tem um nome de no máximo 30 caracteres e sem espaço em branco.

Saída
Para cada arquivo da entrada, terá um arquivo de saída.
O arquivo de saída tem três linhas conforme os procedimentos 2, 3 e 4.
Conforme mostra o exemplo de saída a seguir.
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    //Variáveis
    string nomesUniversidade[15] = {};    
    
    //Entrada de Dados
    for(int i = 0; i < 10; i++) {
        cin >> nomesUniversidade[i];
        
        //Saída de Dados
        if(i == 2) cout << nomesUniversidade[2] << endl;
        if(i == 6) cout << nomesUniversidade[6] << endl;
        if(i == 8) cout << nomesUniversidade[8] << endl;
    }
    
    
    
    return 0;
}