#include <iostream>
#include <string>

using namespace std;

int main() {

    string letras;
    int n;

    while (cin >> letras) {

        cin >> n;

        for (int i = 0; i < n; i++) {

            int lampada;
            cin >> lampada;

            cout << letras[lampada - 1];
        }

        cout << endl;
    }

    return 0;
}