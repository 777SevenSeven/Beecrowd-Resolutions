/*
 * Beecrowd | 3065 - Calculando
 * Categoria: Iniciante | Nível 4 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/3065
 */

#include <stdio.h>

#include <string.h>



int main() {

    int numerosTestar, numeroTeste = 1;



    while (scanf("%d", &numerosTestar) == 1 && numerosTestar != 0) {

        char expressao[1000];

        scanf("%s", expressao);



        int resultado = 0;

        int numero = 0;

        char operador = '+';



        for (int i = 0; i < (int)strlen(expressao); i++) {

            char caractere = expressao[i];



            // Se for número

            if (caractere >= '0' && caractere <= '9') {

                numero = numero * 10 + (caractere - '0');

            } else {

                if (operador == '+') {

                    resultado += numero;

                } else {

                    resultado -= numero;

                }

                numero = 0;

                operador = caractere;

            }

        }



        // Aplica o último número da expressão

        if (operador == '+') {

            resultado += numero;

        } else {

            resultado -= numero;

        }



        // Saída de Dados

        printf("Teste %d\n", numeroTeste);

        printf("%d\n\n", resultado);



        numeroTeste++;

    }



    return 0;

}

