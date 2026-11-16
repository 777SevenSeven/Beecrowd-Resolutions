/*
 * Beecrowd | 2006 - Identificando o Chá
 * Categoria: Iniciante | Nível 1 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2006
 */

#include <stdio.h>



int main()

{

    int T = 0, resposta = 0;

    int A = 0, B = 0, C = 0, D = 0, E = 0;

    scanf("%d",&T);

    scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);

    

    if(A == T && A<=1<=4) 

    {

        resposta++;

    }

     else 

     {

        resposta = resposta + 1 - 1;

     }

     if(B == T && A<=1<=4) 

     {

        resposta++;

     }

      else 

      {

        resposta = resposta + 1 - 1;

      } 

       if(C == T && A<=1<=4) 

       {

        resposta++;

       }

        else 

        {

          resposta + 1 - 1;

        } 

         if(D == T && A<=1<=4) 

         {

          resposta++;

         }

    else {

        resposta + 1 - 1;

    } 

    if(E == T && A<=1<=4) {

        resposta++;

    }

    else {

        resposta + 1 - 1;

    }

    printf("%d\n", resposta);







    return 0;

}