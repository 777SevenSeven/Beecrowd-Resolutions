/*
 * Beecrowd | 1067 - Números Ímpares
 * Categoria: Iniciante | Nível 2 | Assunto: Repetição
 * Link: https://judge.beecrowd.com/pt/problems/view/1067
 */

/******************************************************************************



Leia um valor inteiro X (1 <= X <= 1000). Em seguida mostre os ímpares de 1 até X, um valor por linha, inclusive o X, se for o caso.



Entrada

O arquivo de entrada contém 1 valor inteiro qualquer.



Saída

Imprima todos os valores ímpares de 1 até X, inclusive X, se for o caso.



Exemplo de Entrada	Exemplo de Saída

8



1

3

5

7



*******************************************************************************/

#include <stdio.h>



int main()

{

    //Variáveis

    int i = 0, numMaximo = 0;

    

    //Entrada de Dados

    //printf("Coloque um numero que determine o limite da checagem por números impares:\n");

    scanf("%d", &numMaximo);

    

    //Desenvolvimento de Dados

    for(i = 0; i <= numMaximo; i++) { //ele vai rodar desde i = 0, enquanto i for menor que numMaximo, o i aumenta + 1

        if((i % 2) != 0) { 

            printf("%d\n", i); //printa o impar

        }

    }

    

    return 0;

}