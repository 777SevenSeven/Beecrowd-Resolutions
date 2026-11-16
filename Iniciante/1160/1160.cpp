#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int PA, PB;
        double G1, G2;
        cin >> PA >> PB >> G1 >> G2;

        int anosNecessarios = 0;

        while (true) {
            PA += static_cast<int>(PA * G1 / 100.0);
            PB += static_cast<int>(PB * G2 / 100.0);
            anosNecessarios++;

            if (anosNecessarios > 100) {
                cout << "Mais de 1 seculo." << endl;
                break;
            }

            if (PA > PB) {
                cout << anosNecessarios << " anos." << endl;
                break;
            }
        }
    }

    return 0;
}
