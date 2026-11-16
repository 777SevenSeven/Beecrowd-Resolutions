#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    while (N--) {
        long long X;
        scanf("%lld", &X);

        int maior = 0;
        int atual = 0;

        while (X > 0) {
            if (X & 1) {
                atual++;
                if (atual > maior)
                    maior = atual;
            } else {
                atual = 0;
            }
            X >>= 1;
        }

        printf("%d\n", maior);
    }

    return 0;
}
