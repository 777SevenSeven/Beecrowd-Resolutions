/*
 * Beecrowd | 2176 - Paridade
 * Categoria: Iniciante | Nível 1 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2176
 */

#include <stdio.h>

#include <string.h>



int main() {



    char mensagem[101];



    scanf("%s", mensagem);



    int quantidadeUns = 0;



    for (int i = 0; i < strlen(mensagem); i++) {



        if (mensagem[i] == '1') {

            quantidadeUns++;

        }

    }



    if (quantidadeUns % 2 == 0) {

        printf("%s0\n", mensagem);

    }

    else {

        printf("%s1\n", mensagem);

    }



    return 0;

}