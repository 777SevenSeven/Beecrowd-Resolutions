/*
 * Beecrowd | 3493 - Copos empilhados
 * Categoria: Iniciante | Nível 2 | Assunto: Iniciante
 * Link: https://judge.beecrowd.com/pt/problems/view/3493
 */

/******************************************************************************

Entrada





A entrada consiste em vários casos de teste. Cada caso contém dois números A (1 ≤ A ≤ 100) e B (1 ≤ B ≤ 100),

representando a quantidade de copos da pilha do recorde atual e a quantidade de copos da pilha feita na aula, respectivamente.



Saída



Para cada caso de teste, imprima “ok” caso o recorde tenha sido superado ou “no”, caso não tenha sido superado.



Samples Input	Samples Output

1 2



                ok

*******************************************************************************/

#include <stdio.h>



int main()

{

    //Variáveis

    int A = 0, B = 0;

    

    //Entrada de Dados

    scanf("%d %d", &A, &B);

    

    //Desenvolvimento e saída de dados

    if(B > A) {

        puts("ok");

    } else {

        puts("no");

    }



    return 0;

}