/******************************************************************************
Em sua lista atual, Jon Marius tem dois tipos de problemas: problemas de adição na forma ”a + b” e o problema sempre recorrente ”P = NP”.
Jon Marius é uma pessoa bastante distraída, então ele pode ter resolvido esse último problema várias vezes, já que sempre se esquece da solução.
Além disso, ele gostaria de resolver esses problemas sozinho, portanto, você deve ignorá-los.

Entrada
A primeira linha de entrada será um único inteiro N (1 ≤ N ≤ 1000) denotando o número de casos de teste.
Em seguida, siga N linhas com ”P = NP” ou um problema de adição na forma ”a + b”, onde a, b ∈ [0, 1000] são inteiros.

Saída
Produza o resultado de cada adição. Para linhas contendo “P = NP”, imprima “pulado”.

Exemplo de Entrada	Exemplo de Saída
4
2+2
1+2
P=NP
0+0

4
3
skipped
0
*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Variáveis
    int casosTeste = 0, a = 0, b = 0;
    string entrada;
    
    //Entrada de Dados
    cin >> casosTeste;
    
    //Desenvolvimento de Dados
    for(int i = 0; i < casosTeste; i++) {
        cin >> entrada;
        if(entrada == "P=NP") {
            cout << "skipped" << endl;
        } else {
            //Eu encontro o '+' e guardo a posição dele
            size_t pos = entrada.find('+');
            a = stoi(entrada.substr(0, pos)); //antes do '+' (pos)
            b = stoi(entrada.substr(pos + 1)); //depois do '+' (pos)
            cout << a + b << endl;
        }
    }

    return 0;
}