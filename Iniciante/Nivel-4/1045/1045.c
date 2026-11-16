/*
 * Beecrowd | 1045 - Tipos de Triângulos
 * Categoria: Iniciante | Nível 4 | Assunto: Seleção
 * Link: https://judge.beecrowd.com/pt/problems/view/1045
 */

#include <stdio.h>

#include <math.h>



int main() {

    double a, b, c;



    // Entrada de Dados

    scanf("%lf %lf %lf", &a, &b, &c);



    // Ordena os lados em ordem decrescente

    if (a < b) {

        double temp = a;

        a = b;

        b = temp;

    }

    if (a < c) {

        double temp = a;

        a = c;

        c = temp;

    }

    if (b < c) {

        double temp = b;

        b = c;

        c = temp;

    }



    // Verifica o tipo de triângulo

    if (a >= b + c) {

        printf("NAO FORMA TRIANGULO\n");

    } else {

        if (a * a == b * b + c * c) {

            printf("TRIANGULO RETANGULO\n");

        } else if (a * a > b * b + c * c) {

            printf("TRIANGULO OBTUSANGULO\n");

        } else {

            printf("TRIANGULO ACUTANGULO\n");

        }



        if (a == b && b == c) {

            printf("TRIANGULO EQUILATERO\n");

        } else if (a == b || b == c || a == c) {

            printf("TRIANGULO ISOSCELES\n");

        }

    }



    return 0;

}

