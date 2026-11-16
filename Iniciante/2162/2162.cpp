#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int anterior;
    cin >> anterior;

    // 1 = subida
    // -1 = descida
    // 0 = ainda não existe direção
    int direcao = 0;

    bool valido = true;

    for (int i = 1; i < n; i++) {

        int atual;
        cin >> atual;

        if (atual == anterior) {
            valido = false;
        }
        else {

            int novaDirecao;

            if (atual > anterior) {
                novaDirecao = 1;
            }
            else {
                novaDirecao = -1;
            }

            // Se a direção se repetiu, não alternou
            if (direcao == novaDirecao) {
                valido = false;
            }

            direcao = novaDirecao;
        }

        anterior = atual;
    }

    if (valido) {
        cout << 1 << endl;
    }
    else {
        cout << 0 << endl;
    }

    return 0;
}