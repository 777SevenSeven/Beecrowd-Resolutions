/*
 * Beecrowd | 3224 - Aaah!
 * Categoria: Iniciante | Nível 5 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/3224
 */

#include <stdio.h>

#include <string.h>



int main() {

    char ahPaciente[1005], ahMedico[1005];



    // Entrada de Dados

    scanf("%s", ahPaciente);

    scanf("%s", ahMedico);



    // Desenvolvimento de Dados

    int lenPaciente = strlen(ahPaciente) - 1; // número de 'a'

    int lenMedico   = strlen(ahMedico) - 1;   // número de 'a'



    if (lenPaciente >= lenMedico) {

        printf("go\n");

    } else {

        printf("no\n");

    }



    return 0;

}

