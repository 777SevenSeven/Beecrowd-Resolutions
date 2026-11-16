/*
 * Beecrowd | 2543 - Jogatina UFPR
 * Categoria: Iniciante | Nível 1 | Assunto: Iniciante
 * Link: https://judge.beecrowd.com/pt/problems/view/2543
 */

#include <stdio.h>



int main() {



    int n, id;



    while (scanf("%d %d", &n, &id) != EOF) {



        int contador = 0;



        for (int i = 0; i < n; i++) {



            int autor, jogo;

            scanf("%d %d", &autor, &jogo);



            if (autor == id && jogo == 0) {

                contador++;

            }

        }



        printf("%d\n", contador);

    }



    return 0;

}