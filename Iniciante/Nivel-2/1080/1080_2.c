/*
 * Beecrowd | 1080 - Maior e Posição
 * Categoria: Iniciante | Nível 2 | Assunto: Repetição
 * Link: https://judge.beecrowd.com/pt/problems/view/1080
 */

#include <stdio.h>



int main() {

    int maior = 0; 

    int cont = 1; 

    int valorAnterior = 0;

    int valores; 

    int posicao = 0; 



    do {

        scanf("%d", &valores);

        if (valores != valorAnterior) {

            if (valores > maior) {

                maior = valores;

                posicao = cont;

            }

            valorAnterior = valores;

            cont++;

        } 

    } while (cont <= 100);



    printf("%d\n", maior);

    printf("%d\n", posicao);



    return 0;

}