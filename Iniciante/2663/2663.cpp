#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n, k;

    cin >> n;
    cin >> k;

    int notas[1000];

    for (int i = 0; i < n; i++) {
        cin >> notas[i];
    }

    sort(notas, notas + n, greater<int>());

    int notaCorte = notas[k - 1];
    int classificados = 0;

    for (int i = 0; i < n; i++) {

        if (notas[i] >= notaCorte) {
            classificados++;
        }
    }

    cout << classificados << endl;

    return 0;
}