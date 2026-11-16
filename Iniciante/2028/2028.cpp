#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    int caso = 1;

    while (cin >> N) {
        long long quantidade = 1LL + 1LL * N * (N + 1) / 2;

        cout << "Caso " << caso << ": " << quantidade << " ";

        if (quantidade == 1)
            cout << "numero\n";
        else
            cout << "numeros\n";

        // Imprime a sequência
        cout << 0;

        for (int i = 1; i <= N; i++) {
            for (int j = 0; j < i; j++) {
                cout << ' ' << i;
            }
        }

        cout << "\n\n";

        caso++;
    }

    return 0;
}