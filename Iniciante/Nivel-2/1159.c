/*
 * Beecrowd | 1159 - Soma de Pares Consecutivos
 * Categoria: Iniciante | Nível 2 | Assunto: Repetição
 * Link: https://judge.beecrowd.com/pt/problems/view/1159
 */

/******************************************************************************



O programa deve ler um valor inteiro X indefinidas vezes. (O programa irá parar quando o valor de X for igual a 0). Para cada X lido, imprima a soma dos 5 pares consecutivos a partir de X, inclusive o X , se for par. Se o valor de entrada for 4, por exemplo, a saída deve ser 40, que é o resultado da operação: 4+6+8+10+12, enquanto que se o valor de entrada for 11, por exempo, a saída deve ser 80, que é a soma de 12+14+16+18+20.



Entrada

O arquivo de entrada contém muitos valores inteiros. O último valor do arquivo é zero.



Saída

Imprima a saida conforme a explicação acima e o exemplo abaixo.



*******************************************************************************/

#include <stdio.h>



int main()

{

    //Variáveis

    int pares = 0, X = 0, soma = 0;



    while(1) {

        //Entrada de Dados

        scanf("%d", &X);

        if(X == 0) {

            break;

        }

        

        //Desenvolvimento de Dados

        while (pares < 5) { 

            if((X % 2) == 0) { 

                    pares++;

                    soma = soma + X;

                    X+=2;

            } else { 

                X+=1;

            }

        }

    //Saída de Dados

    printf("%d\n", soma);

    

    pares = 0;

    soma = 0;

    }

    

    return 0;

}

