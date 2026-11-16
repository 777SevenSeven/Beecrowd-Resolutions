/*
 * Beecrowd | 2520 - O Último Analógimôn
 * Categoria: Iniciante | Nível 5 | Assunto: Distância
 * Link: https://judge.beecrowd.com/pt/problems/view/2520
 */

#include <iostream>

#include <cstdlib>

using namespace std;



int main()

{

    // Variáveis

    int N = 0;

    int M = 0;

    int valor = 0;



    int linhaJogador = 0;

    int colunaJogador = 0;



    int linhaMonstro = 0;

    int colunaMonstro = 0;



    int menorTempo = 0;



    // Entrada de Dados

    while(cin >> N >> M)

    {

        for(int i = 0; i < N; i++)

        {

            for(int j = 0; j < M; j++)

            {

                cin >> valor;



                if(valor == 1)

                {

                    linhaJogador = i;

                    colunaJogador = j;

                }

                else if(valor == 2)

                {

                    linhaMonstro = i;

                    colunaMonstro = j;

                }

            }

        }



        // Desenvolvimento de Dados

        menorTempo = abs(linhaJogador - linhaMonstro)

                   + abs(colunaJogador - colunaMonstro);



        // Saída de Dados

        cout << menorTempo << endl;

    }



    return 0;

}