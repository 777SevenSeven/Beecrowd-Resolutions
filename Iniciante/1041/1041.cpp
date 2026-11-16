#include <iostream>
using namespace std;

int main() {
    double x, y;
    cin >> x >> y;

    // Origem
    if (x == 0.0 && y == 0.0) {
        cout << "Origem" << endl;
    }
    // Q1
    else if (x > 0.0 && y > 0.0) {
        cout << "Q1" << endl;
    }
    // Q2
    else if (x < 0.0 && y > 0.0) {
        cout << "Q2" << endl;
    }
    // Q3
    else if (x < 0.0 && y < 0.0) {
        cout << "Q3" << endl;
    }
    // Q4
    else if (x > 0.0 && y < 0.0) {
        cout << "Q4" << endl;
    }
    // Eixo X
    else if (y == 0.0 && x != 0.0) {
        cout << "Eixo X" << endl;
    }
    // Eixo Y
    else if (x == 0.0 && y != 0.0) {
        cout << "Eixo Y" << endl;
    }

    return 0;
}
