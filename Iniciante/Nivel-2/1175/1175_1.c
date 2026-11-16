/*
 * Beecrowd | 1175 - Troca em Vetor I
 * Categoria: Iniciante | Nível 2 | Assunto: Vetores
 * Link: https://judge.beecrowd.com/pt/problems/view/1175
 */

#include <stdio.h>

int main()

{

    int N[20], i, j, VETORTROCADO[20], trocar;

      for (i=0;i<20;i++){

        scanf("%d",&N[i]);

        }

     for(i=0;i<10;i++){

             trocar=N[i];

             N[i]=N[19-i];

             N[19-i]=trocar;

         }

         for(i=0;i<20;i++){

         VETORTROCADO[i]=N[i];

        }

    for(i=0;i<20;i++){

      printf("N[%d] = %d\n", i,VETORTROCADO[i]);

      }

    return 0;

}