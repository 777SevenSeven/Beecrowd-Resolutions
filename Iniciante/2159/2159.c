#include <stdio.h>
#include <math.h>

int main() {

    double n;
    scanf("%lf", &n);

    double P = n / log(n);
    double M = 1.25506 * (n / log(n));

    printf("%.1f %.1f\n", P, M);

    return 0;
}