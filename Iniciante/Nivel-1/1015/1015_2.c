/*
 * Beecrowd | 1015 - Distância Entre Dois Pontos
 * Categoria: Iniciante | Nível 1 | Assunto: Sequencial
 * Link: https://judge.beecrowd.com/pt/problems/view/1015
 */

#include <stdio.h>

#include <math.h>



int main() {

    

    float x1 = 0, y1 = 0, x2 = 0, y2 = 0,  resultadoSubtracaoX = 0, resultadoSubtracaoY = 0,

    resultadoSomaXY = 0 , distancia = 0;

    scanf("%f%f%f%f", &x1, &y1, &x2, &y2);

    

    resultadoSubtracaoX = x2 - x1;

    resultadoSubtracaoY = y2 - y1;

    resultadoSomaXY = pow(resultadoSubtracaoX, 2) + pow(resultadoSubtracaoY, 2);

    distancia = sqrt(resultadoSomaXY);

    

    printf("%0.4f\n", distancia );

    return 0;

}