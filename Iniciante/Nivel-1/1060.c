/*
 * Beecrowd | 1060 - Números Positivos
 * Categoria: Iniciante | Nível 1 | Assunto: Repetição
 * Link: https://judge.beecrowd.com/pt/problems/view/1060
 */

#include <stdio.h>

 

int main() {

    int numerosPositivos = 0, cont = 1;

    float numeros = 0;

 

    for(cont = 1; cont <= 6; cont++)

    {

        scanf("%f", &numeros);

        if(numeros >= 0)

        {

            numerosPositivos+=1;

        }

    }

     printf("%d valores positivos\n", numerosPositivos);

    return 0;

}