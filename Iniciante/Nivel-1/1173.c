/*
 * Beecrowd | 1173 - Preenchimento de Vetor I
 * Categoria: Iniciante | Nível 1 | Assunto: Vetores
 * Link: https://judge.beecrowd.com/pt/problems/view/1173
 */

#include <stdio.h>

 

int main() {

 

 int i,numero,vetor[10],numeroMultiplicado, contagem=-1;

      scanf("%d",&numero);

    vetor[0]=numero;

      for (i=1; i<10;i++){

          numeroMultiplicado=vetor[i-1]*2;

          vetor[i]=numeroMultiplicado;

      }

    for (i=0; i < 10; i++){

       contagem++;

      printf("N[%d] = %d\n",contagem, vetor[i]);

    }

    return 0;

    return 0;

}