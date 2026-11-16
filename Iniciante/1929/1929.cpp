#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    // Verifica todas as combinações possíveis de 3 varetas
    if ((a + b > c && a + c > b && b + c > a) ||   // a, b, c
        (a + b > d && a + d > b && b + d > a) ||   // a, b, d
        (a + c > d && a + d > c && c + d > a) ||   // a, c, d
        (b + c > d && b + d > c && c + d > b)) {   // b, c, d
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}
