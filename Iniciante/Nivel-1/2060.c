/*
 * Beecrowd | 2060 - Desafio de Bino
 * Categoria: Iniciante | Nível 1 | Assunto: Estrutura de repetição
 * Link: https://judge.beecrowd.com/pt/problems/view/2060
 */

/******************************************************************************

Bino e Cino são colegas inseparáveis. Bino gosta de criar desafios matemáticos para Cino resolver. Desta vez, Bino gerou uma lista de números e perguntou ao Cino quantos números da lista são múltiplos de 2, 3, 4 e 5.



Esse desafio pode parecer simples, porém, quando a lista contém muitos números, Cino se confunde e acaba errando alguns cálculos. Para ajudar Cino, faça um programa para resolver o desafio de Bino.



Entrada

A primeira linha da entrada consiste em um inteiro N (1 ≤ N ≤1000), representando a quantidade de números na lista de Bino.



A segunda linha contém N inteiros Li (1 ≤ Li ≤ 100), representando os números da lista de Bino.



Saída

Imprima a quantidade de números múltiplos de 2, 3, 4 e 5 presentes na lista. Observe a formatação da saída nos exemplos, pois ela deve ser seguida rigorosamente.



Exemplo de Entrada

5

2 5 4 20 10



Exemplo de Saída

4 Multiplo(s) de 2

0 Multiplo(s) de 3

2 Multiplo(s) de 4

3 Multiplo(s) de 5

*******************************************************************************/

#include <stdio.h>



int main()

{

    //Variáveis

    int multiplos = 0, CasosTeste = 0, N = 0, j = 2, multiplosDois = 0, multiplosTres = 0, multiplosQuatro = 0, multiplosCinco = 0;

    

    //Entrada de Dados

    scanf("%d", &CasosTeste);

    

    //Desenvolvimento de Dados

    for(int i = 0; i < CasosTeste; i++) {

        scanf("%d", &N);

        for(j = 2; j <= 5; j++) {

            if((N % j) == 0) {

                if(j == 2)

                    multiplosDois++;

                if(j == 3)

                    multiplosTres++;

                if(j == 4)

                    multiplosQuatro++;

                if(j == 5)

                    multiplosCinco++;

            }

        }

    }

    

    //Saída de Dados

    printf("%d Multiplo(s) de 2\n", multiplosDois);

    printf("%d Multiplo(s) de 3\n", multiplosTres);

    printf("%d Multiplo(s) de 4\n", multiplosQuatro);

    printf("%d Multiplo(s) de 5\n", multiplosCinco);

    

    return 0;

}

