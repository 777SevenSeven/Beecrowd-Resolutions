#include <stdio.h>
#include <string.h>

int main() {
    int T, quantidade, vitaminaC, total;
    char alimento[50];

    while (scanf("%d", &T) && T != 0) {
        total = 0;

        for (int i = 0; i < T; i++) {
            scanf("%d", &quantidade);
            getchar(); // consome o espaço ou quebra de linha
            fgets(alimento, sizeof(alimento), stdin);
            alimento[strcspn(alimento, "\n")] = '\0'; // remove \n

            // Descobrindo a quantidade de vitamina C do alimento
            if (strcmp(alimento, "suco de laranja") == 0) {
                vitaminaC = 120;
            } else if (strcmp(alimento, "morango fresco") == 0) {
                vitaminaC = 85;
            } else if (strcmp(alimento, "mamao") == 0) {
                vitaminaC = 85;
            } else if (strcmp(alimento, "goiaba vermelha") == 0) {
                vitaminaC = 70;
            } else if (strcmp(alimento, "manga") == 0) {
                vitaminaC = 56;
            } else if (strcmp(alimento, "laranja") == 0) {
                vitaminaC = 50;
            } else if (strcmp(alimento, "brocolis") == 0) {
                vitaminaC = 34;
            } else {
                vitaminaC = 0;
            }

            total += quantidade * vitaminaC;
        }

        // Saída de Dados
        if (total > 130) {
            printf("Menos %d mg\n", total - 130);
        } else if (total < 110) {
            printf("Mais %d mg\n", 110 - total);
        } else {
            printf("%d mg\n", total);
        }
    }

    return 0;
}
