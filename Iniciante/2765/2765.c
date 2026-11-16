#include <stdio.h>
#include <string.h>

int main() {
    char linha[505]; // margem bem maior que 100

    if (fgets(linha, sizeof(linha), stdin) == NULL) {
        return 0;
    }

    // Remove o '\n' final, se existir
    size_t len = strlen(linha);
    if (len > 0 && linha[len - 1] == '\n') {
        linha[len - 1] = '\0';
    }

    // Procura a vírgula
    char *virgula = strchr(linha, ',');
    if (virgula != NULL) {
        *virgula = '\0';
        printf("%s\n", linha);
        printf("%s\n", virgula + 1);
    }

    return 0;
}
