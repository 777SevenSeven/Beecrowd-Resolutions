#include <stdio.h>
#include <string.h>

int main() {
    int grito = 0, resultado = 0;
    char corvo[10];

    while (grito < 3) {
        if (fgets(corvo, sizeof(corvo), stdin) == NULL) break;
        corvo[strcspn(corvo, "\n")] = '\0'; // remove \n

        if (strcmp(corvo, "caw caw") == 0) {
            printf("%d\n", resultado);
            resultado = 0;
            grito++;
        } else {
            int valor = 0;
            for (int i = 0; i < 3; i++) {
                if (corvo[i] == '*') {
                    valor += (1 << (2 - i));
                }
            }
            resultado += valor;
        }
    }

    return 0;
}
