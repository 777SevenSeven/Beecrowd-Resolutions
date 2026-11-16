/*
 * Beecrowd | 3241 - Ajude um Candidato a PhD!
 * Categoria: Iniciante | Nível 5 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/3241
 */

#include <stdio.h>

#include <string.h>

#include <stdlib.h>  // necessário para atoi



int main() {

    int casosTeste;

    scanf("%d", &casosTeste);



    for (int i = 0; i < casosTeste; i++) {

        char entrada[50];

        scanf("%s", entrada);



        if (strcmp(entrada, "P=NP") == 0) {

            printf("skipped\n");

        } else {

            // encontra o '+'

            char *pos = strchr(entrada, '+');

            *pos = '\0'; // separa a string em duas partes



            int a = atoi(entrada);

            int b = atoi(pos + 1);



            printf("%d\n", a + b);

        }

    }



    return 0;

}

