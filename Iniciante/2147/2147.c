#include <stdio.h>
#include <string.h>

int main() {

    int casosTeste;
    scanf("%d", &casosTeste);

    for (int i = 0; i < casosTeste; i++) {

        char palavra[10001];
        scanf("%s", palavra);

        double tempo = strlen(palavra) * 0.01;

        printf("%.2f\n", tempo);
    }

    return 0;
}