#include <stdio.h>
#include <math.h>

int main() {
    double area, pi = 3.14159, raio;
    scanf("%lf", &raio);
    area = pow(raio, 2) * pi;
    printf("A=%.4lf\n", area);
    return 0;
}