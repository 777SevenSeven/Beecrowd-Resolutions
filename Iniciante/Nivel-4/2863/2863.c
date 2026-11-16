/*
 * Beecrowd | 2863 - Umil Bolt
 * Categoria: Iniciante | Nível 4 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2863
 */

#include <stdio.h>



int main() {

    int T;

    double tempo, maisRapido;



    // lê até EOF

    while (scanf("%d", &T) == 1) {

        scanf("%lf", &maisRapido);



        for (int i = 1; i < T; i++) {

            scanf("%lf", &tempo);

            if (tempo < maisRapido) {

                maisRapido = tempo;

            }

        }



        printf("%.2lf\n", maisRapido);

    }



    return 0;

}

