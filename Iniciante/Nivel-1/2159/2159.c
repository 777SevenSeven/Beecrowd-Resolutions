/*
 * Beecrowd | 2159 - Número Aproximado de Primos
 * Categoria: Iniciante | Nível 1 | Assunto: Ad hoc, Biblioteca matemáti…
 * Link: https://judge.beecrowd.com/pt/problems/view/2159
 */

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