/*
 * Beecrowd | 1008 - Salário
 * Categoria: Iniciante | Nível 2 | Assunto: Sequencial
 * Link: https://judge.beecrowd.com/pt/problems/view/1008
 */

#include <stdio.h>

int main() {

 int numero=0,hora=0;

 float valor=0;

   scanf("%d %d %f", &numero, &hora, &valor);

     float salario = valor*hora;

       printf("NUMBER = %d\nSALARY = U$ %0.2f\n", numero, salario);

    return 0;

   

}