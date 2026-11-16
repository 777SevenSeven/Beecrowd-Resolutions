#include <stdio.h>

int main() {
    long long N;

    // Lê até EOF
    while (scanf("%lld", &N) == 1) {
        printf("%lld\n", (N - 1) / 100 + 1);
    }

    return 0;
}
