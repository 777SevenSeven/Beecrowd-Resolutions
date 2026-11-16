#include <stdio.h>

int main() {
    int A = 0, B = 0;
    scanf("%d %d", &A, &B);

    if (A % B == 0 || B % A == 0) {
        puts("Sao Multiplos");
    } else {
        puts("Nao sao Multiplos");
    }
    return 0;
}