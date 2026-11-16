/*
 * Beecrowd | 2812 - Laércio
 * Categoria: Iniciante | Nível 3 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2812
 */

#include <iostream>

#include <vector>

#include <algorithm>



using namespace std;



int main() {

    int N;

    cin >> N;



    while (N--) {

        int M;

        cin >> M;



        vector<int> impares;



        for (int i = 0; i < M; i++) {

            int x;

            cin >> x;



            if (x % 2 != 0) {

                impares.push_back(x);

            }

        }



        sort(impares.begin(), impares.end());



        int esquerda = 0;

        int direita = impares.size() - 1;



        bool primeiro = true;



        while (esquerda <= direita) {



            // Maior disponível

            if (!primeiro)

                cout << " ";



            cout << impares[direita];

            direita--;

            primeiro = false;



            // Menor disponível

            if (esquerda <= direita) {

                cout << " " << impares[esquerda];

                esquerda++;

            }

        }



        cout << endl;

    }



    return 0;

}