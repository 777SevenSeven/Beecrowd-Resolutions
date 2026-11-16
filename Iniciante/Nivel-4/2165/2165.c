/*
 * Beecrowd | 2165 - Tuitando
 * Categoria: Iniciante | Nível 4 | Assunto: Ad hoc, Fgets, String
 * Link: https://judge.beecrowd.com/pt/problems/view/2165
 */

#include <stdio.h>

#include <string.h>



int main() {

    char texto[505]; // até 500 caracteres + '\0'



    // Entrada de dados (linha inteira)

    fgets(texto, sizeof(texto), stdin);



    // Remove o '\n' caso exista

    size_t len = strlen(texto);

    if (len > 0 && texto[len - 1] == '\n') {

        texto[len - 1] = '\0';

        len--;

    }



    // Desenvolvimento e saída de dados

    if (len > 140) {

        printf("MUTE\n");

    } else {

        printf("TWEET\n");

    }



    return 0;

}

