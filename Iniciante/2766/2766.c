#include <stdio.h>

int main() {
    char nomes[10][31]; // 10 nomes, cada um com até 30 caracteres + '\0'

    // Entrada de Dados
    for (int i = 0; i < 10; i++) {
        scanf("%30s", nomes[i]); // lê até 30 caracteres sem espaço
    }

    // Saída de Dados
    printf("%s\n", nomes[2]); // terceiro nome (índice 2)
    printf("%s\n", nomes[6]); // sétimo nome (índice 6)
    printf("%s\n", nomes[8]); // nono nome (índice 8)

    return 0;
}
