#include <stdio.h>

int main() {

    int n;

    while (scanf("%d", &n) != EOF) {

        int contador = 0;

        while (n > 1) {
            n /= 2;
            contador++;
        }

        printf("%d\n", contador);
    }

    return 0;
}