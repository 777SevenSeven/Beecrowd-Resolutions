/*
 * Beecrowd | 2139 - Natal de Pedrinho
 * Categoria: Iniciante | Nível 2 | Assunto: Ad-hoc
 * Link: https://judge.beecrowd.com/pt/problems/view/2139
 */

#include <stdio.h>



int main() {



    int diasMes[] = {

        31, 29, 31, 30, 31, 30,

        31, 31, 30, 31, 30, 31

    };



    int mes, dia;



    while (scanf("%d %d", &mes, &dia) != EOF) {



        int diaDoAno = dia;



        for (int i = 0; i < mes - 1; i++) {

            diaDoAno += diasMes[i];

        }



        if (mes == 12 && dia == 25) {

            printf("E natal!\n");

        }

        else if (mes == 12 && dia == 24) {

            printf("E vespera de natal!\n");

        }

        else if (mes == 12 && dia > 25) {

            printf("Ja passou!\n");

        }

        else {

            printf("Faltam %d dias para o natal!\n", 360 - diaDoAno);

        }

    }



    return 0;

}