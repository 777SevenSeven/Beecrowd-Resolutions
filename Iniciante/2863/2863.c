#include <stdio.h>

int main() {
    int T;
    double tempo, maisRapido;

    // lê até EOF
    while (scanf("%d", &T) == 1) {
        scanf("%lf", &maisRapido);

        for (int i = 1; i < T; i++) {
            scanf("%lf", &tempo);
            if (tempo < maisRapido) {
                maisRapido = tempo;
            }
        }

        printf("%.2lf\n", maisRapido);
    }

    return 0;
}
