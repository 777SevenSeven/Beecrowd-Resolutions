#include <stdio.h>

int main() {
    int h, m;

    while (scanf("%d %d", &h, &m) == 2) {
        h = h / 30;
        m = m / 6;

        printf("%02d:%02d\n", h, m);
    }

    return 0;
}
