/*
 * Beecrowd | 1015 - Distância Entre Dois Pontos
 * Categoria: Iniciante | Nível 1 | Assunto: Sequencial
 * Link: https://judge.beecrowd.com/pt/problems/view/1015
 */

#include <stdio.h>

#include <math.h>

int main() {

    float X1 = 0, X2 = 0, Y1 = 0, Y2 = 0, resultado1 = 0, resultado2 = 0, resultado1Elevado = 0,

    resultado2Elevado = 0, resultadoRaiz = 0;

    

    scanf("%f %f %f %f", &X1, &Y1, &X2, &Y2);

    

    resultado1 = X2 - X1;

    resultado2 = Y2 - Y1;

    resultado1Elevado = pow( resultado1, 2);

    resultado2Elevado = pow( resultado2, 2);

    resultadoRaiz = sqrt(resultado1Elevado + resultado2Elevado); 

    

    printf("%0.4f\n", resultadoRaiz);

    return 0;

}