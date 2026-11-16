/*
 * Beecrowd | 2582 - System of a Download
 * Categoria: Iniciante | Nível 2 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2582
 */

#include <stdio.h>



int main() {

    int C, X, Y;



    char *musicas[] = {

        "PROXYCITY",

        "P.Y.N.G.",

        "DNSUEY!",

        "SERVERS",

        "HOST!",

        "CRIPTONIZE",

        "OFFLINE DAY",

        "SALT",

        "ANSWER!",

        "RAR?",

        "WIFI ANTENNAS"

    };



    scanf("%d", &C);

    

    while (C--) {

        scanf("%d %d", &X, &Y);

        printf("%s\n", musicas[X + Y]);

    }



    return 0;

}