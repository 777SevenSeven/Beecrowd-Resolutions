#include <stdio.h>

int main() {

    char letras[27];
    int n;

    while (scanf("%s", letras) != EOF) {

        scanf("%d", &n);

        for (int i = 0; i < n; i++) {

            int lampada;
            scanf("%d", &lampada);

            printf("%c", letras[lampada - 1]);
        }

        printf("\n");
    }

    return 0;
}