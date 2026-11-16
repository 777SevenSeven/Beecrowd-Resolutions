/*
 * Beecrowd | 1036 - Fórmula de Bhaskara
 * Categoria: Iniciante | Nível 3 | Assunto: Seleção
 * Link: https://judge.beecrowd.com/pt/problems/view/1036
 */

#include <stdio.h>

#include <math.h>



int main() {

    double A, B, C;

    double delta, R1, R2;



    //ENTRADA DE DADOS

    scanf("%lf %lf %lf", &A, &B, &C);



    delta = B * B - 4 * A * C;



    if (A == 0 || delta < 0) {

        puts("Impossivel calcular");

    } else {

        R1 = (-B + sqrt(delta)) / (2 * A);

        R2 = (-B - sqrt(delta)) / (2 * A);



        printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);

    }



    return 0;

}

