/*
 * Beecrowd | 2061 - As Abas de Péricles
 * Categoria: Iniciante | Nível 1 | Assunto: Ad-hoc
 * Link: https://judge.beecrowd.com/pt/problems/view/2061
 */

/******************************************************************************

cada vez que Péricles fechava uma aba no seu navegador, outras duas abas apareciam!

No entanto, quando Péricles clicou sem querer em uma das propagandas de uma aba, percebeu que, por um erro do navegador,

a aba foi encerrada (sem abrir outras abas).



Sua tarefa é descobrir com quantas abas que o navegador de Péricles ficou, sabendo o número inicial de abas e a sequência de ações de Péricles.

As ações podem ser fechou (quando Péricles fechou uma aba) ou clicou (quando Péricles clicou em uma propaganda).



Entrada

A entrada é iniciada por uma linha contendo dois números inteiros positivos, N e M (0 < N, M < 500),

representando o número inicial de abas e o número de ações de Péricles. Cada linha subsequente contém uma ação (fechou ou clicou).

Naturalmente, o número de abas é sempre maior ou igual a zero.



Saída

A saída deve ser uma linha contendo o número final de abas.

*******************************************************************************/

#include <iostream>

using namespace std;



int main()

{

    //Variáveis

    int N = 0, M = 0;

    string acao;

    

    //Entrada de Dados

    cin >> N >> M;

    

    int numeroFinalAbas = N;

    

    //Desenvolvimento de Dados

    for(int i = 0; i < M; i++) {

        cin >> acao;

        if(acao == "fechou") {

            numeroFinalAbas-=1;

            numeroFinalAbas+=2;

        } else {

            numeroFinalAbas--;

        }

    }

    

    //Saída de Dados

    cout << numeroFinalAbas << endl;

    

    return 0;

}