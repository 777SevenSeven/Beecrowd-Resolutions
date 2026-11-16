#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int anterior, atual;
    cin >> anterior;

    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }

    cin >> atual;

    int diferenca = atual - anterior;
    int escadinhas = 1;

    anterior = atual;

    for (int i = 2; i < n; i++) {

        cin >> atual;

        int novaDiferenca = atual - anterior;

        if (novaDiferenca != diferenca) {
            escadinhas++;
            diferenca = novaDiferenca;
        }

        anterior = atual;
    }

    cout << escadinhas << endl;

    return 0;
}