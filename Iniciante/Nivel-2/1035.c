/*
 * Beecrowd | 1035 - Teste de Seleção 1
 * Categoria: Iniciante | Nível 2 | Assunto: Seleção
 * Link: https://judge.beecrowd.com/pt/problems/view/1035
 */

#include <stdio.h>

 

int main() {

 

  int A = 0, B = 0, C = 0, D = 0, somaCD = 0, somaAB = 0;

  scanf("%d%d%d%d", &A, &B, &C, &D);

  

  somaCD = C + D;

  somaAB = A + B;

  

  if(A % 2 == 0){

    if(B > C && D > A){

      if(somaCD > somaAB){

          if(C >= 0 && D >= 0){

            puts("Valores aceitos");

        } else{

            puts("Valores nao aceitos");}

      } else{

            puts("Valores nao aceitos");}

  } else{

            puts("Valores nao aceitos");}

  } else{

            puts("Valores nao aceitos");}

    return 0;

}