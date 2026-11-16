#include <stdio.h>

int main() {
    long long X, M;

    while (scanf("%lld %lld", &X, &M) == 2) {
        if (X == 0 && M == 0)
            break;
        
        printf("%lld\n", X * M);
    }

    return 0;
}