/*
 * Beecrowd | 1074 - Par ou Ímpar
 * Categoria: Iniciante | Nível 2 | Assunto: Repetição
 * Link: https://judge.beecrowd.com/pt/problems/view/1074
 */

/******************************************************************************

Leia um valor inteiro N. Este valor será a quantidade de valores que serão lidos em seguida. Para cada valor lido, mostre uma mensagem em inglês dizendo se este valor lido é par (EVEN), ímpar (ODD), positivo (POSITIVE) ou negativo (NEGATIVE). No caso do valor ser igual a zero (0), embora a descrição correta seja (EVEN NULL), pois por definição zero é par, seu programa deverá imprimir apenas NULL.



Entrada

A primeira linha da entrada contém um valor inteiro N(N < 10000) que indica o número de casos de teste. Cada caso de teste a seguir é um valor inteiro X (-107 < X <107).



Saída

Para cada caso, imprima uma mensagem correspondente, de acordo com o exemplo abaixo. Todas as letras deverão ser maiúsculas e sempre deverá haver um espaço entre duas palavras impressas na mesma linha.



Exemplo de Entrada	Exemplo de Saída

4

-5

0

3

-4



ODD NEGATIVE

NULL

ODD POSITIVE

EVEN NEGATIVE

*******************************************************************************/

#include <stdio.h>



int main()

{

    //Variáveis

    int numMaximo = 0, num = 0, i = 0;

    //Entrada de Dados

    scanf("%d", &numMaximo);

    

    for(i = 0; i < numMaximo; i++) {

        scanf("%d", &num);

        //Desenvolvimento de Dados e Saída de Dados

        //CASO DOS POSITIVOS - PAR(EVEN), IMPAR(ODD)

        if((num > 0) && ((num % 2) == 0)) {

            printf("EVEN POSITIVE\n");

        } 

        else if((num > 0) && ((num % 2) != 0)) {

            printf("ODD POSITIVE\n");

        } 

        

        //CASO DOS NEGATIVOS - PAR(EVEN), IMPAR(ODD)

        else if((num < 0) && ((num % 2) == 0)) {

            printf("EVEN NEGATIVE\n");

        } 

        else if((num < 0) && ((num % 2) != 0)) {

            printf("ODD NEGATIVE\n");

        }

        

        //CASO DO NULL (SE FOR 0)

        else if(num == 0) {

            printf("NULL\n");

        }

    }

    

    return 0;

}

