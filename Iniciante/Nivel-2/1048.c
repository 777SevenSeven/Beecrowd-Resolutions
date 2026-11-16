/*
 * Beecrowd | 1048 - Aumento de Salário
 * Categoria: Iniciante | Nível 2 | Assunto: Seleção
 * Link: https://judge.beecrowd.com/pt/problems/view/1048
 */

#include <stdio.h>



int main() {

    double salario;

    double reajuste;

    double novoSalario;



    scanf("%lf", &salario);



    if (salario >= 0 && salario <= 400.00) {

        reajuste = salario * 0.15;

    } else if (salario <= 800.00) {

        reajuste = salario * 0.12;

    } else if (salario <= 1200.00) {

        reajuste = salario * 0.10;

    } else if (salario <= 2000.00) {

        reajuste = salario * 0.07;

    } else {

        reajuste = salario * 0.04;

    }



    novoSalario = salario + reajuste;



    printf("Novo salario: %.2lf\n", novoSalario);

    printf("Reajuste ganho: %.2lf\n", reajuste);

    printf("Em percentual: %d %%\n", (int)(reajuste / salario * 100));



    return 0;

}

