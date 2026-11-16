/*
 * Beecrowd | 2554 - Pizza Antes de BH
 * Categoria: Iniciante | Nível 3 | Assunto: Iniciante
 * Link: https://judge.beecrowd.com/pt/problems/view/2554
 */

#include <iostream>

#include <string>



using namespace std;



int main() {



    int n, d;



    while (cin >> n >> d) {



        string resposta = "Pizza antes de FdI";



        for (int i = 0; i < d; i++) {



            string data;

            cin >> data;



            bool todosPodem = true;



            for (int j = 0; j < n; j++) {



                int pode;

                cin >> pode;



                if (pode == 0) {

                    todosPodem = false;

                }

            }



            // Como as datas já estão em ordem,

            // a primeira possível é a resposta.

            if (todosPodem && resposta == "Pizza antes de FdI") {

                resposta = data;

            }

        }



        cout << resposta << endl;

    }



    return 0;

}