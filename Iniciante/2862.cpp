/******************************************************************************
Entrada
A entrada é composta por vários casos de teste. A primeira linha contém um número inteiro C relativo ao número de casos de teste.
Em seguida, haverá C linhas, com um número inteiro N (100 <= N <= 100000) relativo ao nível de energia de um ser vivo.

Saída
Para cada valor lido, imprima o texto correspondente.

Exemplo de Entrada	Exemplo de Saída
3
8001
100
200

Mais de 8000!
Inseto!
Inseto!
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int casosTeste = 0, numeroEnviado = 0;
    
    cin >> casosTeste;
    
    for(int i = 0; i < casosTeste; i++) {
        cin >> numeroEnviado;
        if(numeroEnviado > 8000) {
            cout << "Mais de 8000!" << endl;
        } else {
            cout << "Inseto!" << endl;
        }
    }

    return 0;
}