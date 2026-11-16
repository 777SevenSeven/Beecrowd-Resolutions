#include <stdio.h>

// Macros para facilitar leitura
#define DESCEU2   (TdoisMenosTum < 0)
#define DESCEU3   (TtresMenosTdois < 0)
#define SUBIU2    (TdoisMenosTum > 0)
#define SUBIU3    (TtresMenosTdois > 0)
#define PERMANECEU2 (TdoisMenosTum == 0)
#define PERMANECEU3 (TtresMenosTdois == 0)

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int TdoisMenosTum = B - A;
    int TtresMenosTdois = C - B;

    if (DESCEU2 && (SUBIU3 || PERMANECEU3)) { // Caso 1 feliz
        puts(":)");
    } else if (SUBIU2 && (DESCEU3 || PERMANECEU3)) { // Caso 2 triste
        puts(":(");
    } else if (SUBIU2 && SUBIU3 && (TtresMenosTdois < TdoisMenosTum)) { // Caso 3 triste
        puts(":(");
    } else if (SUBIU2 && SUBIU3 && (TtresMenosTdois >= TdoisMenosTum)) { // Caso 4 feliz
        puts(":)");
    } else if (DESCEU2 && DESCEU3 && (-TtresMenosTdois < -TdoisMenosTum)) { // Caso 5 feliz
        puts(":)");
    } else if (DESCEU2 && DESCEU3 && (-TtresMenosTdois >= -TdoisMenosTum)) { // Caso 6 triste
        puts(":(");
    } else if (PERMANECEU2 && SUBIU3) { // Caso 7 feliz
        puts(":)");
    } else if (PERMANECEU2 && (DESCEU3 || PERMANECEU3)) { // Caso 7 triste
        puts(":(");
    }

    return 0;
}
