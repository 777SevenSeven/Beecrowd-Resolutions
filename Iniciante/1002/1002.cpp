#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double raio;
    const double pi = 3.14159;

    cin >> raio;

    double area = pow(raio, 2) * pi;

    cout << fixed << setprecision(4);
    cout << "A=" << area << endl;

    return 0;
}
