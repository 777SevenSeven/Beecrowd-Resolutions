#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int casosTeste;
    cin >> casosTeste;

    for (int i = 0; i < casosTeste; i++) {

        int hora;
        int minuto;
        int fechouOuNao;

        cin >> hora >> minuto >> fechouOuNao;

        if (fechouOuNao == 1) {
            cout << setfill('0') << setw(2) << hora
                 << ":"
                 << setw(2) << minuto
                 << " - A porta abriu!" << endl;
        }
        else {
            cout << setfill('0') << setw(2) << hora
                 << ":"
                 << setw(2) << minuto
                 << " - A porta fechou!" << endl;
        }
    }

    return 0;
}