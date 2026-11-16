/*
 * Beecrowd | 2533 - Estágio
 * Categoria: Iniciante | Nível 3 | Assunto: Iniciante
 * Link: https://judge.beecrowd.com/pt/problems/view/2533
 */

#include <stdio.h>



int main() {



    int disciplinas;



    while (scanf("%d", &disciplinas) != EOF) {



        int nota;

        int cargaHoraria;



        double notaIRACima = 0;

        double notaIRABaixo = 0;



        for (int i = 0; i < disciplinas; i++) {



            scanf("%d %d", &nota, &cargaHoraria);



            notaIRACima += nota * cargaHoraria;

            notaIRABaixo += cargaHoraria * 100;

        }



        double notaIRA = notaIRACima / notaIRABaixo;



        printf("%.4f\n", notaIRA);

    }



    return 0;

}