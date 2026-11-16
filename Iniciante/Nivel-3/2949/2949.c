/*
 * Beecrowd | 2949 - A Sociedade do Anel
 * Categoria: Iniciante | Nível 3 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2949
 */

#include <stdio.h>



int main() {

    int Anoes = 0, Elfos = 0, Humanos = 0, Magos = 0, Hobbits = 0;

    int quantidadeTeste;

    char nome[100];

    char classe;



    scanf("%d", &quantidadeTeste);



    for (int i = 0; i < quantidadeTeste; i++) {

        scanf("%s %c", nome, &classe);

        if (classe == 'X') {

            Hobbits++;

        } else if (classe == 'M') {

            Magos++;

        } else if (classe == 'H') {

            Humanos++;

        } else if (classe == 'E') {

            Elfos++;

        } else {

            Anoes++;

        }

    }



    printf("%d Hobbit(s)\n", Hobbits);

    printf("%d Humano(s)\n", Humanos);

    printf("%d Elfo(s)\n", Elfos);

    printf("%d Anao(oes)\n", Anoes);

    printf("%d Mago(s)\n", Magos);



    return 0;

}

