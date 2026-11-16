/*
 * Beecrowd | 2523 - A Mensagem de Will
 * Categoria: Iniciante | Nível 2 | Assunto: Iniciante
 * Link: https://judge.beecrowd.com/pt/problems/view/2523
 */

#include <stdio.h>



int main() {



    char letras[27];

    int n;



    while (scanf("%s", letras) != EOF) {



        scanf("%d", &n);



        for (int i = 0; i < n; i++) {



            int lampada;

            scanf("%d", &lampada);



            printf("%c", letras[lampada - 1]);

        }



        printf("\n");

    }



    return 0;

}