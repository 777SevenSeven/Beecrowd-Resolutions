/*
 * Beecrowd | 1175 - Troca em Vetor I
 * Categoria: Iniciante | Nível 2 | Assunto: Vetores
 * Link: https://judge.beecrowd.com/pt/problems/view/1175
 */

#include <stdio.h>

#define TAM 20



int main () {

    int vetor[TAM], vetorInvertido[TAM], i = 0;

    

    //Entrada de Dados no vetor, com o uso de um loop

    for(i = 0; i < TAM; i++) { //"inicializo a váriavel i com 0, se i for menor que 5, i aumenta um, então faça:"

        scanf("%d", &vetor[i]); //o usuário entra com os valores

    }

    //Exposição dos dados do vetor, com o uso de um loop

    for(i = 0; i < TAM; i++) { //"inicializo a váriavel i com 0, se i for menor que 5, i aumenta um, então faça:"

        vetorInvertido[i] = vetor[TAM - i - 1]; //o vetor invertido na posição 0, recebe o valor da posição 5 pra baixo;

        printf("N[%d] = %d\n", i, vetorInvertido[i]); 

        }

return 0;

}