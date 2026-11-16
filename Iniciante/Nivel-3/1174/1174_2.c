/*
 * Beecrowd | 1174 - Seleçao em Vetor I
 * Categoria: Iniciante | Nível 3 | Assunto: Vetores
 * Link: https://judge.beecrowd.com/pt/problems/view/1174
 */

#include <stdio.h>

#define TAM 100



int main()

{

    float vetor[TAM], menor = 0;

    //Entrada de Dados com loop

    for(int i = 0; i < TAM; i++) {

        scanf("%f", &vetor[i]);

    }

    

    //Processamento dos Dados do vetor

    for(int j = 0; j < TAM; j++) {

        if(vetor[j] <= 10) {

            menor = vetor[j];

            printf("A[%d] = %.1f\n", j, vetor[j]);

        }

    }

    return 0;

}

