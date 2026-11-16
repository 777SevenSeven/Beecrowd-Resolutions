/*
 * Beecrowd | 2483 - Feliz Nataaal!
 * Categoria: Iniciante | Nível 1 | Assunto: Repetição
 * Link: https://judge.beecrowd.com/pt/problems/view/2483
 */

/******************************************************************************

Entrada

A entrada é composta por um inteiro I (1 < I ≤ 104) que representa o índice de felicidade.



Saída

A saída é composta pela frase "Feliz natal!", sendo repetidas I vezes a última letra a da frase. Uma quebra de linha é necessária após a impressão da frase.



Exemplo de Entrada	Exemplo de Saída

5



                    Feliz nataaaaal!

*******************************************************************************/

#include <stdio.h>

#include <string.h>



int main()

{

    //Variáveis

    int quantiaA = 0;

    

    //Entrada de Dados

    scanf("%d", &quantiaA);

    

    printf("Feliz nat");

    //Desenvolvimento e Saída de Dados

    for(int i = 0; i < quantiaA; i++) {

        printf("a");

    }

    printf("l!\n");

    

    

    return 0;

}