#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int anterior;
    cin >> anterior;

    int resposta = 0;

    for (int i = 2; i <= n; i++) {

        int atual;
        cin >> atual;

        if (resposta == 0 && atual < anterior) {
            resposta = i;
        }

        anterior = atual;
    }

    cout << resposta << endl;

    return 0;
}