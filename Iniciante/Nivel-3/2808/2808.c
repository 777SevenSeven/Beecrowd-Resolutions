/*
 * Beecrowd | 2808 - Mais Cavalos
 * Categoria: Iniciante | Nível 3 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2808
 */

#include <stdio.h>

#include <stdlib.h>



int main() {

    char origem[3], destino[3];



    scanf("%s %s", origem, destino);



    int colunaOrigem = origem[0] - 'a';

    int linhaOrigem = origem[1] - '0';



    int colunaDestino = destino[0] - 'a';

    int linhaDestino = destino[1] - '0';



    int diferencaColuna = abs(colunaOrigem - colunaDestino);

    int diferencaLinha = abs(linhaOrigem - linhaDestino);



    if ((diferencaColuna == 2 && diferencaLinha == 1) ||

        (diferencaColuna == 1 && diferencaLinha == 2)) {

        printf("VALIDO\n");

    } else {

        printf("INVALIDO\n");

    }



    return 0;

}

