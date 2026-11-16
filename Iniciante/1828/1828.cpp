#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        string opcaoSheldon, opcaoRaj;
        cin >> opcaoSheldon >> opcaoRaj;

        // normaliza para minúsculas
        transform(opcaoSheldon.begin(), opcaoSheldon.end(), opcaoSheldon.begin(), ::tolower);
        transform(opcaoRaj.begin(), opcaoRaj.end(), opcaoRaj.begin(), ::tolower);

        if (opcaoSheldon == opcaoRaj) {
            cout << "Caso #" << i << ": De novo!" << endl;
        }
        else if ((opcaoSheldon == "tesoura" && opcaoRaj == "papel") ||
                 (opcaoSheldon == "papel"   && opcaoRaj == "pedra") ||
                 (opcaoSheldon == "pedra"   && opcaoRaj == "lagarto") ||
                 (opcaoSheldon == "lagarto" && opcaoRaj == "spock") ||
                 (opcaoSheldon == "spock"   && opcaoRaj == "tesoura") ||
                 (opcaoSheldon == "tesoura" && opcaoRaj == "lagarto") ||
                 (opcaoSheldon == "lagarto" && opcaoRaj == "papel") ||
                 (opcaoSheldon == "papel"   && opcaoRaj == "spock") ||
                 (opcaoSheldon == "spock"   && opcaoRaj == "pedra") ||
                 (opcaoSheldon == "pedra"   && opcaoRaj == "tesoura")) {
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }
        else {
            cout << "Caso #" << i << ": Raj trapaceou!" << endl;
        }
    }

    return 0;
}
