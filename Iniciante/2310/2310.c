#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int totalSaques = 0;
    int totalBloqueios = 0;
    int totalAtaques = 0;

    int sucessosSaques = 0;
    int sucessosBloqueios = 0;
    int sucessosAtaques = 0;

    for (int i = 0; i < n; i++) {

        char nome[101];

        int saques, bloqueios, ataques;
        int saquesSucesso, bloqueiosSucesso, ataquesSucesso;

        scanf("%s", nome);

        scanf("%d %d %d", &saques, &bloqueios, &ataques);

        scanf("%d %d %d",
              &saquesSucesso,
              &bloqueiosSucesso,
              &ataquesSucesso);

        totalSaques += saques;
        totalBloqueios += bloqueios;
        totalAtaques += ataques;

        sucessosSaques += saquesSucesso;
        sucessosBloqueios += bloqueiosSucesso;
        sucessosAtaques += ataquesSucesso;
    }

    double percentualSaques =
        (double) sucessosSaques / totalSaques * 100;

    double percentualBloqueios =
        (double) sucessosBloqueios / totalBloqueios * 100;

    double percentualAtaques =
        (double) sucessosAtaques / totalAtaques * 100;

    printf("Pontos de Saque: %.2f %%.\n", percentualSaques);
    printf("Pontos de Bloqueio: %.2f %%.\n", percentualBloqueios);
    printf("Pontos de Ataque: %.2f %%.\n", percentualAtaques);

    return 0;
}