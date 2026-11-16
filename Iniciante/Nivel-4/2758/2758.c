/*
 * Beecrowd | 2758 - Entrada e Saída de Números Reais
 * Categoria: Iniciante | Nível 4 | Assunto: Números Reais
 * Link: https://judge.beecrowd.com/pt/problems/view/2758
 */

#include <stdio.h>



int main() {

    float A, B;

    double C, D;



    // Entrada de Dados

    scanf("%f %f", &A, &B);

    scanf("%lf %lf", &C, &D);



    // 6 casas decimais

    printf("A = %.6f, B = %.6f\n", A, B);

    printf("C = %.6lf, D = %.6lf\n", C, D);



    // 1 casa decimal

    printf("A = %.1f, B = %.1f\n", A, B);

    printf("C = %.1lf, D = %.1lf\n", C, D);



    // 2 casas decimais

    printf("A = %.2f, B = %.2f\n", A, B);

    printf("C = %.2lf, D = %.2lf\n", C, D);



    // 3 casas decimais

    printf("A = %.3f, B = %.3f\n", A, B);

    printf("C = %.3lf, D = %.3lf\n", C, D);



    // Notação científica com 3 casas decimais

    printf("A = %.3E, B = %.3E\n", A, B);

    printf("C = %.3E, D = %.3E\n", C, D);



    // Zero casas decimais (arredondamento)

    printf("A = %.0f, B = %.0f\n", A, B);

    printf("C = %.0lf, D = %.0lf\n", C, D);



    return 0;

}

