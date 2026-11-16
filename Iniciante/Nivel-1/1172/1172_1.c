/*
 * Beecrowd | 1172 - Substituição em Vetor I
 * Categoria: Iniciante | Nível 1 | Assunto: Vetores
 * Link: https://judge.beecrowd.com/pt/problems/view/1172
 */

#include <stdio.h>



int main()

{ 

    int i=0, X[10] = {};

    

   for ( i=0 ; i < 10 ; i++){

        scanf ("%d",&X[i]);

          

          if (X[i] <= 0 ){

              

              X[i] = 1;

          }

   }

     for ( i=0 ; i < 10 ; i++){

         printf ("X[%d] = %d\n", i, X[i]);

          

   } 

  

    return 0;

}