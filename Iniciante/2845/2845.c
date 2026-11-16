#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int maior = 0;

    for (int i = 0; i < n; i++) {

        int x;
        scanf("%d", &x);

        if (x > maior) {
            maior = x;
        }
    }

    printf("%d\n", maior + 1);

    return 0;
}