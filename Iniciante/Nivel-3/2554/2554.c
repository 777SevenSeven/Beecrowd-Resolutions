/*
 * Beecrowd | 2554 - Pizza Antes de BH
 * Categoria: Iniciante | Nível 3 | Assunto: Iniciante
 * Link: https://judge.beecrowd.com/pt/problems/view/2554
 */

#include <stdio.h>

#include <string.h>



int main() {



    int n, d;



    while (scanf("%d %d", &n, &d) != EOF) {



        char resposta[30] = "Pizza antes de FdI";



        for (int i = 0; i < d; i++) {



            char data[30];

            scanf("%s", data);



            int todosPodem = 1;



            for (int j = 0; j < n; j++) {



                int pode;

                scanf("%d", &pode);



                if (pode == 0) {

                    todosPodem = 0;

                }

            }



            if (todosPodem && strcmp(resposta, "Pizza antes de FdI") == 0) {

                strcpy(resposta, data);

            }

        }



        printf("%s\n", resposta);

    }



    return 0;

}