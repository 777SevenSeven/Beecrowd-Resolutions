/*
 * Beecrowd | 1009 - Salário com Bônus
 * Categoria: Iniciante | Nível 2 | Assunto: Sequencial
 * Link: https://judge.beecrowd.com/pt/problems/view/1009
 */

#include <stdio.h>

int main(){

 char nome[100];

 double salario, montante, salarioBonus, resultado;

   scanf("%99[^\n] %lf %lf", nome,  &salario, &montante);

     resultado=montante*0.15;

     salarioBonus=resultado+salario;

       printf("TOTAL = R$ %0.2lf\n", salarioBonus);

    return 0;

}