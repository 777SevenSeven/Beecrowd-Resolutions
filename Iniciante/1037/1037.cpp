#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double numero;
    cin >> numero;

    if (numero < 0.0 || numero > 100.0) {
        cout << "Fora de intervalo" << endl;
    } else if (numero >= 0.0 && numero <= 25.0) {
        cout << "Intervalo [0,25]" << endl;
    } else if (numero > 25.0 && numero <= 50.0) {
        cout << "Intervalo (25,50]" << endl;
    } else if (numero > 50.0 && numero <= 75.0) {
        cout << "Intervalo (50,75]" << endl;
    } else if (numero > 75.0 && numero <= 100.0) {
        cout << "Intervalo (75,100]" << endl;
    }

    return 0;
}
