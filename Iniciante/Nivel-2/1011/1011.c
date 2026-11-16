/*
 * Beecrowd | 1011 - Esfera
 * Categoria: Iniciante | Nível 2 | Assunto: Sequencial
 * Link: https://judge.beecrowd.com/pt/problems/view/1011
 */

#include <stdio.h>

#include <math.h>

int main() {

 int raio=0;

 double pi=3.14159, resultado=0;

   scanf("%d", &raio);

     resultado=(4.0/3)*(pi*pow(raio,3));

       printf("VOLUME = %0.3lf\n", resultado);

    return 0;

}