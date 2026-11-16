#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    int n;
    cin >> n;

    double raiz5 = sqrt(5.0);

    double phi = (1.0 + raiz5) / 2.0;
    double psi = (1.0 - raiz5) / 2.0;

    double fibonacci = (pow(phi, n) - pow(psi, n)) / raiz5;

    cout << fixed << setprecision(1) << fibonacci << endl;

    return 0;
}