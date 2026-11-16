#include <stdio.h>

int iguais(char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i]) return 0;
        i++;
    }
    return a[i] == b[i];
}

int main() {
    int t, i;
    char opcaoSheldon[20], opcaoRaj[20];

    scanf("%d", &t);

    for (i = 1; i <= t; i++) {
        scanf("%s %s", opcaoSheldon, opcaoRaj);

        // normaliza para minúsculas
        for (int j = 0; opcaoSheldon[j]; j++)
            if (opcaoSheldon[j] >= 'A' && opcaoSheldon[j] <= 'Z')
                opcaoSheldon[j] += 32;
        for (int j = 0; opcaoRaj[j]; j++)
            if (opcaoRaj[j] >= 'A' && opcaoRaj[j] <= 'Z')
                opcaoRaj[j] += 32;

        if (iguais(opcaoSheldon, opcaoRaj)) {
            printf("Caso #%d: De novo!\n", i);
        }
        else if ((iguais(opcaoSheldon, "tesoura") && iguais(opcaoRaj, "papel")) ||
                 (iguais(opcaoSheldon, "papel")   && iguais(opcaoRaj, "pedra")) ||
                 (iguais(opcaoSheldon, "pedra")   && iguais(opcaoRaj, "lagarto")) ||
                 (iguais(opcaoSheldon, "lagarto") && iguais(opcaoRaj, "spock")) ||
                 (iguais(opcaoSheldon, "spock")   && iguais(opcaoRaj, "tesoura")) ||
                 (iguais(opcaoSheldon, "tesoura") && iguais(opcaoRaj, "lagarto")) ||
                 (iguais(opcaoSheldon, "lagarto") && iguais(opcaoRaj, "papel")) ||
                 (iguais(opcaoSheldon, "papel")   && iguais(opcaoRaj, "spock")) ||
                 (iguais(opcaoSheldon, "spock")   && iguais(opcaoRaj, "pedra")) ||
                 (iguais(opcaoSheldon, "pedra")   && iguais(opcaoRaj, "tesoura"))) {
            printf("Caso #%d: Bazinga!\n", i);
        }
        else {
            printf("Caso #%d: Raj trapaceou!\n", i);
        }
    }

    return 0;
}
