#include <stdio.h>
#include <string.h>

int main() {
    int A;
    float B;
    char C;
    char D[100];

    scanf("%d %f %c", &A, &B, &C);
    getchar(); // consumir o '\n'
    fgets(D, sizeof(D), stdin);

    // remover '\n' do final da string
    size_t len = strlen(D);
    if (len > 0 && D[len - 1] == '\n') {
        D[len - 1] = '\0';
    }

    // Saída correta
    printf("%d%.6f%c%s\n", A, B, C, D);
    printf("%d\t%.6f\t%c\t%s\n", A, B, C, D);
    printf("%10d%10.6f%10c%10s\n", A, B, C, D);

    return 0;
}
