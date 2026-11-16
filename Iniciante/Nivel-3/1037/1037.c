/*
 * Beecrowd | 1037 - Intervalo
 * Categoria: Iniciante | Nível 3 | Assunto: Seleção
 * Link: https://judge.beecrowd.com/pt/problems/view/1037
 */

#include <stdio.h>

 

int main() {

float numero = 0.00;

 scanf("%f",&numero);

 

 if(numero < 0.00 || numero > 100.00){

 puts("Fora de intervalo");

 } 

 else if (numero <= 25.00 && numero >= 0.00){

 puts("Intervalo [0,25]");

 }else if (numero > 25.00 && numero <= 50.00){

 puts("Intervalo (25,50]");

 } else if (numero > 50.00 && numero <= 75.00){

 puts("Intervalo (50,75]");

 } else if (numero > 75.00 && numero <= 100.00){

 puts("Intervalo (75,100]");}

 

    return 0;

}