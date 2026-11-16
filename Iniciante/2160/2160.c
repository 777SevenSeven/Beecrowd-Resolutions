#include <stdio.h>
#include <string.h>

int main() {
    char texto[505]; // até 500 caracteres + '\0'

    // Entrada de dados (linha inteira)
    fgets(texto, sizeof(texto), stdin);

    // Remove o '\n' caso exista
    size_t len = strlen(texto);
    if (len > 0 && texto[len - 1] == '\n') {
        texto[len - 1] = '\0';
        len--;
    }

    // Desenvolvimento e saída de dados
    if (len > 80) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }

    return 0;
}
