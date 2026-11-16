/*
 * Beecrowd | 3343 - Attack On Gasparini
 * Categoria: Iniciante | Nível 8 | Assunto: Ad-Hoc
 * Link: https://judge.beecrowd.com/pt/problems/view/3343
 */

#include <stdio.h>

#include <stdlib.h>

#include <string.h>



int main() {

    int n, x;

    while (scanf("%d %d", &n, &x) == 2) {

        char ataque[1000005]; // buffer grande para leitura

        scanf("%s", ataque);



        int p, m, g;

        scanf("%d %d %d", &p, &m, &g);



        // aloca dinamicamente as muralhas

        int *walls = (int*) malloc(n * sizeof(int));

        if (!walls) return 1; // falha na alocação

        for (int i = 0; i < n; i++) walls[i] = x;



        int posP = 0, posM = 0, posG = 0;

        int len = strlen(ataque);



        for (int i = 0; i < len; i++) {

            char titan = ataque[i];

            if (titan == 'P') {

                while (posP < n && walls[posP] < p) posP++;

                walls[posP] -= p;

            } else if (titan == 'M') {

                while (posM < n && walls[posM] < m) posM++;

                walls[posM] -= m;

            } else { // G

                while (posG < n && walls[posG] < g) posG++;

                walls[posG] -= g;

            }

        }



        int resposta = posP;

        if (posM > resposta) resposta = posM;

        if (posG > resposta) resposta = posG;

        resposta++;



        printf("%d\n", resposta);



        free(walls);

    }

    return 0;

}

