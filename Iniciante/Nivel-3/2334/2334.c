/*
 * Beecrowd | 2334 - Patinhos
 * Categoria: Iniciante | Nível 3
 * Link: https://judge.beecrowd.com/pt/problems/view/2334
 */

#include <stdio.h>

#include <string.h>



int main() {

    char p[110];



    while (scanf("%s", p) != EOF) {

        if (strcmp(p, "-1") == 0)

            break;

        

        if (strcmp(p, "0") == 0) {

            printf("0\n");

            continue;

        }

        

        int n = strlen(p);

        int i = n - 1;

        

        while (i >= 0) {

            if (p[i] > '0') {

                p[i]--;

                break;

            } else {

                p[i] = '9';

                i--;

            }

        }

        

        int inicio = 0;

        while (inicio < n - 1 && p[inicio] == '0')

            inicio++;

        

        printf("%s\n", p + inicio);

    }



    return 0;

}