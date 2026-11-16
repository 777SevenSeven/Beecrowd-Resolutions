#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;

    while (cin >> N) {
        vector<long long> a(N);
        long long total = 0;

        for (int i = 0; i < N; i++) {
            cin >> a[i];
            total += a[i];
        }

        long long somaRangel = 0;
        long long melhor = LLONG_MAX;

        for (int i = 0; i < N; i++) {
            somaRangel += a[i];

            long long somaGugu = total - somaRangel;
            long long diferenca = llabs(somaRangel - somaGugu);

            melhor = min(melhor, diferenca);
        }

        cout << melhor << '\n';
    }

    return 0;
}