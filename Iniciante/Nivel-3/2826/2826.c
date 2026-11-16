/*
 * Beecrowd | 2826 - Léxico
 * Categoria: Iniciante | Nível 3
 * Link: https://judge.beecrowd.com/pt/problems/view/2826
 */

#include <stdio.h>

#include <string.h>



int main() {

    char A[31], B[31];



    scanf("%30s", A);

    scanf("%30s", B);



    if (strcmp(A, B) < 0) {

        printf("%s\n", A);

        printf("%s\n", B);

    } else {

        printf("%s\n", B);

        printf("%s\n", A);

    }



    return 0;

}

