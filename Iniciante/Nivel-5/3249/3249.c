/*
 * Beecrowd | 3249 - Death Knight Hero
 * Categoria: Iniciante | Nível 5 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/3249
 */

#include <stdio.h>

#include <string.h>



int main() {

    int numeroBatalhas;

    scanf("%d", &numeroBatalhas);



    int batalhasVencidas = 0;



    for (int i = 0; i < numeroBatalhas; i++) {

        char skills[1005];

        scanf("%s", skills);



        // Verifica se existe o padrão "CD"

        if (strstr(skills, "CD") == NULL) {

            batalhasVencidas++;

        }

    }



    printf("%d\n", batalhasVencidas);



    return 0;

}

