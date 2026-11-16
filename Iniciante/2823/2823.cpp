#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    double utilizacao = 0;

    for (int i = 0; i < N; i++) {
        int C, P;
        cin >> C >> P;

        utilizacao += (double) C / P;
    }

    if (utilizacao <= 1)
        cout << "OK" << endl;
    else
        cout << "FAIL" << endl;

    return 0;
}