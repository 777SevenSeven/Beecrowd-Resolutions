/******************************************************************************
Dados o número total de espaços e figurinhas do álbum (N), 
a lista das figurinhas carimbadas e uma lista das figurinhas já compradas (que pode conter figurinhas repetidas), 
sua tarefa é determinar quantas figurinhas carimbadas faltam para completar o álbum.

Entrada
A primeira linha contém três números inteiros N (1 ≤ N ≤ 100) , C (1 ≤ C ≤ N/2) e M (1 ≤ M ≤ 300) 
indicando respectivamente o número de figurinhas (e espaços) do álbum, o número de figurinhas carimbadas do álbum e o número de figurinhas já compradas. 
A segunda linha contém C números inteiros distintos Xi indicando as figurinhas carimbadas do álbum.
A terceira linha contém M números inteiros Yi (1 ≤ Xi , Yi ≤ N) indicando as figurinhas já compradas.

Saída
Seu programa deve produzir um inteiro representando o número de figurinhas carimbadas que falta para completar o álbum.

Exemplos de Entrada	Exemplos de Saída
10 2 5

4 7

7 1 2 8 3

                        1

10 2 6

4 7

7 1 8 4 9 3

                        0

8 4 10

2 4 6 8

3 1 1 5 1 1 7 7 1 1

                        4
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    //Variáveis
    int NTotal = 0, figurinhasCarimbadaTotal = 0, MaeJaComprou = 0, quantoFalta = 0, figurinhasCompradas = 0, jaTem = 0;
    int figurinhasCarimbada[100];
    int figurinhasQueJaTem[100] = {};
    
    //Entrada de Dados
    cin >> NTotal >> figurinhasCarimbadaTotal >> MaeJaComprou;
    
    //Desenvolvimento de Dados
    for(int i = 0; i < figurinhasCarimbadaTotal; i++) {
        cin >> figurinhasCarimbada[i];
    }
    
    for(int i = 0; i < MaeJaComprou; i++) {
        cin >> figurinhasCompradas;
        
        for(int j = 0; j < figurinhasCarimbadaTotal; j++) {
            if(figurinhasCompradas == figurinhasCarimbada[j] && figurinhasQueJaTem[j] == 0) {
                jaTem++;
                figurinhasQueJaTem[j] = figurinhasCompradas;
                }
            }
        }
    
    quantoFalta = figurinhasCarimbadaTotal - jaTem;
    
    //Saída de Dados
    cout << quantoFalta << endl;

    return 0;
}