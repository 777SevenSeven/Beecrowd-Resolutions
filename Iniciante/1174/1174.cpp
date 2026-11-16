#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int TAM = 100;
    double vetor[TAM];

    // Entrada de Dados
    for (int i = 0; i < TAM; i++) {
        cin >> vetor[i];
    }

    // Processamento e Saída
    for (int j = 0; j < TAM; j++) {
        if (vetor[j] <= 10.0) {
            cout << fixed << setprecision(1);
            cout << "A[" << j << "] = " << vetor[j] << endl;
        }
    }

    return 0;
}
