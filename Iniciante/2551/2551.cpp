#include <iostream>

using namespace std;

int main() {

    int n;

    while (cin >> n) {

        int tempoRecorde = 0;
        int distanciaRecorde = 0;

        for (int i = 1; i <= n; i++) {

            int tempo, distancia;
            cin >> tempo >> distancia;

            if (i == 1) {

                cout << i << endl;

                tempoRecorde = tempo;
                distanciaRecorde = distancia;
            }
            else if (distancia * tempoRecorde > distanciaRecorde * tempo) {

                cout << i << endl;

                tempoRecorde = tempo;
                distanciaRecorde = distancia;
            }
        }
    }

    return 0;
}