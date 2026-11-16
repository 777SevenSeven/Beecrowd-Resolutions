/*
 * Beecrowd | 2775 - Preparando a Produção
 * Categoria: Iniciante | Nível 4 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2775
 */

#include <iostream>



using namespace std;



int main() {



    int n;



    while (cin >> n) {



        int pacote[1000];

        int tempo[1000];



        for (int i = 0; i < n; i++) {

            cin >> pacote[i];

        }



        for (int i = 0; i < n; i++) {

            cin >> tempo[i];

        }



        long long total = 0;



        for (int i = 0; i < n - 1; i++) {



            for (int j = 0; j < n - 1 - i; j++) {



                if (pacote[j] > pacote[j + 1]) {



                    total += tempo[j] + tempo[j + 1];



                    swap(pacote[j], pacote[j + 1]);

                    swap(tempo[j], tempo[j + 1]);

                }

            }

        }



        cout << total << endl;

    }



    return 0;

}