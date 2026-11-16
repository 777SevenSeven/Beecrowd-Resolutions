
#include <iostream>
using namespace std;

int main() {
    int X, Y, M;

    while (cin >> X >> Y >> M) {
        for (int i = 0; i < M; i++) {
            int Xi, Yi;
            cin >> Xi >> Yi;

            if ((Xi <= X && Yi <= Y) ||
                (Xi <= Y && Yi <= X)) {
                cout << "Sim\n";
            } else {
                cout << "Nao\n";
            }
        }
    }

    return 0;
}
