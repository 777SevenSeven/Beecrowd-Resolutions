#include <iostream>
#include <vector>
using namespace std;

int main() {
    int casosTeste;
    cin >> casosTeste;

    if (casosTeste < 1 || casosTeste > 1000) {
        return 1; // restrição do problema
    }

    vector<int> vetor(casosTeste);
    for (int i = 0; i < casosTeste; i++) {
        cin >> vetor[i];
    }

    int menor = vetor[0];
    int posicao = 0;

    for (int j = 1; j < casosTeste; j++) {
        if (vetor[j] < menor) {
            menor = vetor[j];
            posicao = j;
        }
    }

    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << posicao << endl;

    return 0;
}
