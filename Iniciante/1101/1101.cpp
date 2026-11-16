#include <iostream>
using namespace std;

int main() {
    int M, N;

    while (true) {
        cin >> M >> N;

        if (M <= 0 || N <= 0) {
            break;
        }

        int soma = 0;

        if (M > N) {
            swap(M, N);
        }

        for (int i = M; i <= N; i++) {
            cout << i << " ";
            soma += i;
        }

        cout << "Sum=" << soma << endl;
    }

    return 0;
}
