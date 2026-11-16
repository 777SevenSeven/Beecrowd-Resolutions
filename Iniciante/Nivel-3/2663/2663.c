/*
 * Beecrowd | 2663 - Fase
 * Categoria: Iniciante | Nível 3
 * Link: https://judge.beecrowd.com/pt/problems/view/2663
 */

#include <stdio.h>

#include <stdlib.h>



int comparar(const void *a, const void *b) {

    return (*(int *)b - *(int *)a);

}



int main() {



    int n, k;



    scanf("%d", &n);

    scanf("%d", &k);



    int notas[1000];



    for (int i = 0; i < n; i++) {

        scanf("%d", &notas[i]);

    }



    qsort(notas, n, sizeof(int), comparar);



    int notaCorte = notas[k - 1];

    int classificados = 0;



    for (int i = 0; i < n; i++) {



        if (notas[i] >= notaCorte) {

            classificados++;

        }

    }



    printf("%d\n", classificados);



    return 0;

}