/*
 * Beecrowd | 1014 - Consumo
 * Categoria: Iniciante | Nível 1 | Assunto: Sequencial
 * Link: https://judge.beecrowd.com/pt/problems/view/1014
 */

#include <stdio.h>

 

int main() {

   int distanciatotal = 0;

   float totalcombustivelgasto = 0, consumomedio = 0;

   scanf("%d %f", &distanciatotal, &totalcombustivelgasto);

   

   consumomedio = (distanciatotal / totalcombustivelgasto);

   

   printf("%0.3f km/l\n", consumomedio);

    return 0;

}