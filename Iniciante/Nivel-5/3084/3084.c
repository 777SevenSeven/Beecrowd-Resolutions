/*
 * Beecrowd | 3084 - Relógio Antigo
 * Categoria: Iniciante | Nível 5 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/3084
 */

#include <stdio.h>



int main() {

    int h, m;



    while (scanf("%d %d", &h, &m) == 2) {

        h = h / 30;

        m = m / 6;



        printf("%02d:%02d\n", h, m);

    }



    return 0;

}

