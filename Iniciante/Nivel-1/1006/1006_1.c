/*
 * Beecrowd | 1006 - Média 2
 * Categoria: Iniciante | Nível 1 | Assunto: Sequencial
 * Link: https://judge.beecrowd.com/pt/problems/view/1006
 */

#include <stdio.h>

 

int main() {

    double A, B, C, peso1=2, peso2=3 ,peso3=5, media, notaP;

      scanf("%lf %lf %lf", &A, &B, &C);

    media=A*peso1+B*peso2+C*peso3;

    notaP=peso1+peso2+peso3;

    media/=notaP;

     printf("MEDIA = %0.1lf\n", media);

 

    return 0;

}