/*
 * Beecrowd | 2221 - Batalha de Pomekons
 * Categoria: Iniciante | Nível 2 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2221
 */

#include <stdio.h>



int main() {



    int bonus = 0, valorGolpe = 0, valorGolpe2 = 0;

    int valorAtaque = 0, valorDefesa = 0, levelTreinador = 0;

    int valorAtaque2 = 0, valorDefesa2 = 0, levelTreinador2 = 0;



    int instancia;

    scanf("%d", &instancia);



    for (int i = 0; i < instancia; i++) {



        scanf("%d", &bonus);



        scanf("%d %d %d",

              &valorAtaque,

              &valorDefesa,

              &levelTreinador);



        scanf("%d %d %d",

              &valorAtaque2,

              &valorDefesa2,

              &levelTreinador2);



        valorGolpe = (valorAtaque + valorDefesa) / 2;

        valorGolpe2 = (valorAtaque2 + valorDefesa2) / 2;



        if (levelTreinador % 2 == 0) {

            valorGolpe += bonus;

        }



        if (levelTreinador2 % 2 == 0) {

            valorGolpe2 += bonus;

        }



        if (valorGolpe > valorGolpe2) {

            printf("Dabriel\n");

        }

        else if (valorGolpe2 > valorGolpe) {

            printf("Guarte\n");

        }

        else {

            printf("Empate\n");

        }

    }



    return 0;

}