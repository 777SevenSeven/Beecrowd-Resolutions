#include <stdio.h>
#include <math.h>

int main() {
    int casosTeste;
    scanf("%d", &casosTeste);

    for (int i = 0; i < casosTeste; i++) {
        int N, M;
        scanf("%d %d", &N, &M);

        // Fórmula: número de dígitos = floor(M * log10(N)) + 1
        int digitos = (int)(floor(M * log10((double)N)) + 1);

        printf("%d\n", digitos);
    }

    return 0;
}
