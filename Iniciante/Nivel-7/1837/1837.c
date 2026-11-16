/*
 * Beecrowd | 1837 - Prefácio
 * Categoria: Iniciante | Nível 7 | Assunto: Ad hoc
 * Link: https://judge.beecrowd.com/pt/problems/view/1837
 */

/******************************************************************************



Lembre que o quociente e o resto da divisão de um inteiro a por um inteiro não-nulo b são respectivamente os únicos inteiros q e r tais que 0 ≤ r < |b| e:

a = b × q + r

Caso você não saiba, o teorema que garante a existência e a unicidade dos inteiros q e r é conhecido como ‘Teorema da Divisão Euclidiana’ ou ‘Algoritmo da Divisão’.



Entrada

A entrada é composta por dois números inteiros a e b (-1.000 ≤ a, b < 1.000).



Saída

Imprima o quociente q seguido pelo resto r da divisão de a por b.



*******************************************************************************/

#include <stdio.h>



int main()

{

    //Variáveis

    int a = 0, b = 0, q = 0, r = 0;

    

    //Entrada de Dados

    scanf("%d %d", &a, &b);

    

    //Desenvolvimento de Dados

    q = a / b;

    r = a % b;

    

    if(r < 0) {

        if(b > 0) {

            q -= 1;

            r += b;

        } else {

            q += 1;

            r -= b;

        }

    }

    

    //Saída de Dados

    printf("%d %d\n", q, r);



    return 0;

}

