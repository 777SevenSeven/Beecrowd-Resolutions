#include <iostream>
using namespace std;

int main() {
    int inicio, fim;
    cin >> inicio >> fim;

    // Garante ordem crescente
    if (inicio > fim) {
        int temp = inicio;
        inicio = fim;
        fim = temp;
    }

    // Percorre os números entre inicio e fim (excluindo os extremos)
    for (int i = inicio + 1; i < fim; i++) {
        if (i % 5 == 2 || i % 5 == 3) {
            cout << i << endl;
        }
    }

    return 0;
}
