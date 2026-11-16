/******************************************************************************
Entrada
A entrada consite de uma única linha contendo 5 inteiros: p, j1, j2, r, a. ( 0 ≤ p, r, a ≤ 1 e 1 ≤ j1, j2 ≤ 100).

p representa a escolha do jogador 1 (se p = 1 então o jogador 1 escolheu par, se p = 0 então o jogador 1 escolheu ímpar).
Os valores j1, j2, representam respectivamente o número escolhido pelo jogador 1 e pelo jogador 2.
r representa se o jogador 1 roubou (se r = 1 então o jogador 1 roubou, se r = 0 então o jogador 1 não roubou),
a representa se o jogador 2 acusou o roubo (se a = 1 então o jogador 2 acusou o jogador 1 de roubo, se a = 0 então ele não acusou o jogador 1 de roubo).

Saída
Imprima "Jogador 1 ganha!" se o jogador 1 ganhou ou "Jogador 2 ganha!" se o jogador 2 ganhou (sem as aspas).
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    //Variáveis
    int parOuNao = 0, NumeroJogadorUm = 0, NumeroJogadorDois = 0, RoubouOuNao = 0, AcusouOuNao = 0, resultadoParImpar = 0;
    
    //Entrada de Dados
    cin >> parOuNao >> NumeroJogadorUm >> NumeroJogadorDois >> RoubouOuNao >> AcusouOuNao;
    
    //Desenvolvimento de Dados
    resultadoParImpar = NumeroJogadorUm + NumeroJogadorDois;

    //Primeiro verificamos se houve roubo e acusação
    if(RoubouOuNao == 1) { //Jogador 1 roubou
        if(AcusouOuNao == 1) { //Jogador 2 acusou corretamente
            cout << "Jogador 2 ganha!" << endl;
        } else {
            cout << "Jogador 1 ganha!" << endl; //Jogador 1 roubou, mas não foi acusado
        }
    } else { //Jogador 1 não roubou
        if(AcusouOuNao == 1) { //Jogador 2 acusou sem haver roubo
            cout << "Jogador 1 ganha!" << endl; //Acusação falsa
        } else {
            
            //Agora verificamos apenas a paridade
            if(resultadoParImpar % 2 == 0) { //Se deu par
                if(parOuNao == 1) { //Se o jogador 1 escolheu par
                    cout << "Jogador 1 ganha!" << endl;
                } else {
                    cout << "Jogador 2 ganha!" << endl; //Deu par, mas jogador 1 escolheu ímpar
                }
                
            } else { //Se deu ímpar
                if(parOuNao == 0) { //Se o jogador 1 escolheu ímpar
                    cout << "Jogador 1 ganha!" << endl;
                } else {
                    cout << "Jogador 2 ganha!" << endl; //Deu ímpar, mas jogador 1 escolheu par
                }
            }
        }
    }

    return 0;
}