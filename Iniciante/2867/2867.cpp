/******************************************************************************
Dados dois números inteiros, n e m, quantos dígitos tem nm ?

Exemplos:

2 e 10 - 210 = 1024 - 4 dígitos

3 e 9 - 39 = 19683 - 5 dígitos

Entrada
A entrada é composta por vários casos de teste. A primeira linha tem um número inteiro C, representando a quantidade de casos de teste.
As C linhas seguintes contém dois números inteiros N e M (1 <= N, M <= 100).

Saída
Para cada caso de teste de entrada do seu programa, 
você deve imprimir um número inteiro contendo a quantidade de dígitos do resultado da potência calculada no respectivo caso de teste.

Exemplo de Entrada	Exemplo de Saída
4
1 1
2 10
3 9
100 100

1
4
5
201
*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //Variáveis
    int N = 0, M = 0, digitos = 0, casosTeste = 0;
    
    //Entrada de Dados
    cin >> casosTeste;
    
    //Desenvolvimento de Dados
    for(int i = 0; i < casosTeste; i++) {
        cin >> N >> M;
        
        digitos = floor(M * log10(N)) + 1;
        
        cout << digitos << endl;
        
    }
    

    return 0;
}