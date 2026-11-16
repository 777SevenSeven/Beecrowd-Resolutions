#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    int casa = 0;
    int escritorio = 0;

    int comprouCasa = 0;
    int comprouEscritorio = 0;

    for (int i = 0; i < N; i++) {
        char ida[10], volta[10];
        scanf("%s %s", ida, volta);

        // Ida: casa -> escritório
        if (strcmp(ida, "chuva") == 0) {
            if (casa == 0) {
                casa++;
                comprouCasa++;
            }
            casa--;
            escritorio++;
        }

        // Volta: escritório -> casa
        if (strcmp(volta, "chuva") == 0) {
            if (escritorio == 0) {
                escritorio++;
                comprouEscritorio++;
            }
            escritorio--;
            casa++;
        }
    }

    printf("%d %d\n", comprouCasa, comprouEscritorio);

    return 0;
}
