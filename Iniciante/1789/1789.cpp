#include <iostream>
using namespace std;

int main() {
    int L, Vi;

    // Leitura até EOF
    while (cin >> L) {
        int maior = 0;

        for (int i = 0; i < L; i++) {
            cin >> Vi;
            if (Vi > maior) {
                maior = Vi;
            }
        }

        if (maior < 10) {
            cout << 1 << endl;
        } else if (maior >= 10 && maior < 20) {
            cout << 2 << endl;
        } else {
            cout << 3 << endl;
        }
    }

    return 0;
}
