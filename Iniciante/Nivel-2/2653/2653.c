/*
 * Beecrowd | 2653 - Dijkstra
 * Categoria: Iniciante | Nível 2 | Assunto: Sets
 * Link: https://judge.beecrowd.com/pt/problems/view/2653
 */

#include <stdio.h>

#include <stdlib.h>

#include <string.h>



#define TAM 200003



typedef struct No {

    char *valor;

    struct No *prox;

} No;



No *tabela[TAM];



unsigned long hash(char *str) {



    unsigned long h = 5381;

    int c;



    while ((c = *str++)) {

        h = ((h << 5) + h) + c;

    }



    return h % TAM;

}



int main() {



    char entrada[1000005];

    int quantidade = 0;



    while (scanf("%1000004s", entrada) != EOF) {



        unsigned long pos = hash(entrada);



        No *atual = tabela[pos];

        int existe = 0;



        while (atual != NULL) {



            if (strcmp(atual->valor, entrada) == 0) {

                existe = 1;

                break;

            }



            atual = atual->prox;

        }



        if (!existe) {



            No *novo = malloc(sizeof(No));



            novo->valor = malloc(strlen(entrada) + 1);

            strcpy(novo->valor, entrada);



            novo->prox = tabela[pos];

            tabela[pos] = novo;



            quantidade++;

        }

    }



    printf("%d\n", quantidade);



    return 0;

}