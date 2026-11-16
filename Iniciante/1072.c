#include <stdio.h>

int main() {
    int X = 0, fora = 0, dentro = 0, i = 1, numeroDeTestes = 0;

    scanf("%d", &numeroDeTestes);

    for (int i = 1; i <= numeroDeTestes; i++) {
        scanf("%d", &X);
        if (X < 10 || X > 20) {
            fora++;
        } else {
            dentro++;
        }
    }

    printf("%d in\n%d out\n", dentro, fora);
    return 0;
}
