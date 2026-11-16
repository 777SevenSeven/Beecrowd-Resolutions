/*
 * Beecrowd | 2543 - Jogatina UFPR
 * Categoria: Iniciante | Nível 1 | Assunto: Iniciante
 * Link: https://judge.beecrowd.com/pt/problems/view/2543
 */

#include <iostream>



using namespace std;



int main() {



    int n, id;



    while (cin >> n >> id) {



        int contador = 0;



        for (int i = 0; i < n; i++) {



            int autor, jogo;

            cin >> autor >> jogo;



            if (autor == id && jogo == 0) {

                contador++;

            }

        }



        cout << contador << endl;

    }



    return 0;

}