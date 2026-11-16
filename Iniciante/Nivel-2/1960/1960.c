/*
 * Beecrowd | 1960 - Numeração Romana para Números de Página
 * Categoria: Iniciante | Nível 2 | Assunto: Ad-Hoc, Digits, Switch-Case
 * Link: https://judge.beecrowd.com/pt/problems/view/1960
 */

/******************************************************************************

Você deve escrever um programa que, dado um número arábico, mostra seu equivalente na numeração romana.



Lembre que I representa 1, V é 5, X é 10, L é 50, C é 100, D é 500 e M representa 1000.



Entrada

A entrada é um número inteiro positivo N (0 < N < 1000).



Saída

A saída é o número N escrito na numeração romana em uma única linha. Use sempre letras maiúsculas.

*******************************************************************************/



#include <stdio.h>

#include <string.h>



int main()

{

    // Variáveis

    int N = 0;

    char numeracaoRomana[20] = "";



    // Entrada de Dados

    scanf("%d", &N);



    // Desenvolvimento de Dados

    while(N > 0) {



        if(N >= 900) {

            strcat(numeracaoRomana, "CM");

            N -= 900;

        }

        else if(N >= 500) {

            strcat(numeracaoRomana, "D");

            N -= 500;

        }

        else if(N >= 400) {

            strcat(numeracaoRomana, "CD");

            N -= 400;

        }

        else if(N >= 100) {

            strcat(numeracaoRomana, "C");

            N -= 100;

        }

        else if(N >= 90) {

            strcat(numeracaoRomana, "XC");

            N -= 90;

        }

        else if(N >= 50) {

            strcat(numeracaoRomana, "L");

            N -= 50;

        }

        else if(N >= 40) {

            strcat(numeracaoRomana, "XL");

            N -= 40;

        }

        else if(N >= 10) {

            strcat(numeracaoRomana, "X");

            N -= 10;

        }

        else if(N >= 9) {

            strcat(numeracaoRomana, "IX");

            N -= 9;

        }

        else if(N >= 5) {

            strcat(numeracaoRomana, "V");

            N -= 5;

        }

        else if(N >= 4) {

            strcat(numeracaoRomana, "IV");

            N -= 4;

        }

        else {

            strcat(numeracaoRomana, "I");

            N -= 1;

        }

    }



    // Saída de Dados

    printf("%s\n", numeracaoRomana);



    return 0;

}