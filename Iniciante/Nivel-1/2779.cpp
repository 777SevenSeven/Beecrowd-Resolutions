/*
 * Beecrowd | 2779 - Álbum da Copa
 * Categoria: Iniciante | Nível 1
 * Link: https://judge.beecrowd.com/pt/problems/view/2779
 */

/******************************************************************************

Dados o número total de espaços e figurinhas do álbum, 

e uma lista das figurinhas já compradas (que pode conter figurinhas repetidas), 

sua tarefa é determinar quantas figurinhas faltam para completar o álbum.



Entrada

A primeira linha contém um inteiro N (1 ≤ N ≤ 100) indicando o número total de figurinhas e espaços no álbum.

A segunda linha contém um inteiro M (1 ≤ M ≤ 300) indicando o número de figurinhas já compradas.

Cada uma das M linhas seguintes contém um número inteiro X (1 ≤ X ≤ N) indicando uma figurinha já comprada.



Saída

Seu programa deve produzir uma única linha contendo um inteiro representando o número de figurinhas que falta para completar o álbum.

*******************************************************************************/

#include <iostream>

using namespace std;



int main()

{

    int figurinhasTotal = 0, comprasTotal = 0, figurinhaComprei = 0, figurinhasRestantes = 0;



    int figurinhasCompradas[101] = {};



    cin >> figurinhasTotal;

    cin >> comprasTotal;



    figurinhasRestantes = figurinhasTotal;



    for(int i = 0; i < comprasTotal; i++) {

        cin >> figurinhaComprei;



        if(figurinhasCompradas[figurinhaComprei] == 0) {

            figurinhasCompradas[figurinhaComprei] = 1;

            figurinhasRestantes--;

        }

    }



    cout << figurinhasRestantes << endl;



    return 0;

}