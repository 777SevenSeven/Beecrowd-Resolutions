#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    // Ordena os lados em ordem decrescente
    if (a < b) swap(a, b);
    if (a < c) swap(a, c);
    if (b < c) swap(b, c);

    // Verifica o tipo de triângulo
    if (a >= b + c) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {
        if (a * a == b * b + c * c) {
            cout << "TRIANGULO RETANGULO" << endl;
        } else if (a * a > b * b + c * c) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        } else {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }

        if (a == b && b == c) {
            cout << "TRIANGULO EQUILATERO" << endl;
        } else if (a == b || b == c || a == c) {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }

    return 0;
}
