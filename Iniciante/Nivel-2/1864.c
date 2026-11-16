/*
 * Beecrowd | 1864 - Nossos Dias Nunca Voltarão
 * Categoria: Iniciante | Nível 2 | Assunto: Ad hoc
 * Link: https://judge.beecrowd.com/pt/problems/view/1864
 */

/******************************************************************************

LIFE IS NOT A PROBLEM TO BE SOLVED BUT A REALITY TO BE EXPERIENCED

*******************************************************************************/

#include <stdio.h>



int main()

{

    //Variáveis

    char citacaoCompleta[] = {"LIFE IS NOT A PROBLEM TO BE SOLVED BUT A REALITY TO BE EXPERIENCED"};

    int N = 0, i = 0;

    

    //Entrada de Dados

    scanf("%d", &N);

    

    //Desenvolvimento de Dados

    for(i = 0; i < N; i++) {

        

        //Saída de Dados

        printf("%c", citacaoCompleta[i]);

    }

    printf("\n"); // Fim de linha

    

    return 0;

}