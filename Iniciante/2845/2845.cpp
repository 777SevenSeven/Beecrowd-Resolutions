#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int maior = 0;

    for (int i = 0; i < n; i++) {

        int x;
        cin >> x;

        if (x > maior) {
            maior = x;
        }
    }

    cout << maior + 1 << endl;

    return 0;
}