#include <iostream>

using namespace std;

int main() {

    int n;

    while (cin >> n) {

        int contador = 0;

        while (n > 1) {
            n /= 2;
            contador++;
        }

        cout << contador << endl;
    }

    return 0;
}