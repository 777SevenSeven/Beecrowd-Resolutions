/*
 * Beecrowd | 2686 - A Mudança Continua!!
 * Categoria: Iniciante | Nível 5
 * Link: https://judge.beecrowd.com/pt/problems/view/2686
 */

#include <stdio.h>

#include <math.h>



int main() {

    double graus;

    int totalSegundos, horas, minutos, segundos;



    // Entrada de Dados

    while (scanf("%lf", &graus) == 1) {

        // 360 graus correspondem a 24 horas

        // O horário começa 90 graus depois da posição 0

        totalSegundos = (int) round((graus + 90) / 360.0 * 86400);



        // Como o círculo é contínuo, 360 graus volta para 0

        totalSegundos %= 86400;



        horas = totalSegundos / 3600;

        minutos = (totalSegundos % 3600) / 60;

        segundos = totalSegundos % 60;



        // Saída de Dados

        if (graus >= 0 && graus < 90) {

            printf("Bom Dia!!\n");

        } else if (graus >= 90 && graus < 180) {

            printf("Boa Tarde!!\n");

        } else if (graus >= 180 && graus < 270) {

            printf("Boa Noite!!\n");

        } else {

            printf("De Madrugada!!\n");

        }



        printf("%02d:%02d:%02d\n", horas, minutos, segundos);

    }



    return 0;

}

