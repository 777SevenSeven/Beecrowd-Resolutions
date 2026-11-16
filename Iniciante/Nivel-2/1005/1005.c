/*
 * Beecrowd | 1005 - Média 1
 * Categoria: Iniciante | Nível 2 | Assunto: Sequencial
 * Link: https://judge.beecrowd.com/pt/problems/view/1005
 */

#include <stdio.h>

 

int main() {

  double A,B,media,peso1=3.5,peso2=7.5, somaP;

  scanf("%lf %lf", &A,&B);

    somaP=peso1+peso2;

    media=peso1*A+peso2*B;

    media/=somaP;

    printf("MEDIA = %.5lf\n", media);

    return 0;

}