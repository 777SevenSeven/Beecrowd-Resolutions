#include <stdio.h>

int main()
{
    double volume, diametro, raio, altura, area;

    while (scanf("%lf %lf", &volume, &diametro) != EOF)
    {
        raio = diametro / 2.0;

        area = 3.14 * raio * raio;
        altura = volume / area;

        printf("ALTURA = %.2lf\n", altura);
        printf("AREA = %.2lf\n", area);
    }

    return 0;
}