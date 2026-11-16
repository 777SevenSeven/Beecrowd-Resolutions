/*
 * Beecrowd | 2896 - Aproveite a Oferta
 * Categoria: Iniciante | Nível 1 | Assunto: Matemática
 * Link: https://judge.beecrowd.com/pt/problems/view/2896
 */

#include <stdio.h>

#include <math.h>



int main() {



    int refrigerantesComprados = 0;

    int garrafasVazias = 0;

    int segundoDia = 0;



    int casosTeste;

    scanf("%d", &casosTeste);



    for (int i = 0; i < casosTeste; i++) {



        scanf("%d %d", &refrigerantesComprados, &garrafasVazias);



        segundoDia = round(

            (refrigerantesComprados / garrafasVazias) +

            (refrigerantesComprados % garrafasVazias)

        );



        printf("%d\n", segundoDia);

    }



    return 0;

}