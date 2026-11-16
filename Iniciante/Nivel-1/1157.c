/*
 * Beecrowd | 1157 - Divisores I
 * Categoria: Iniciante | Nível 1 | Assunto: Repetição
 * Link: https://judge.beecrowd.com/pt/problems/view/1157
 */



#include <stdio.h>



int main()

{

    int N = 0, cont = 1, divisivel = 0, guardar = 0;

    //Entrada de Dados

    scanf("%d", &N);



    //Processamento de Dados

    for(cont = 1; cont <= N; cont++) {

        if(N % cont == 0) {

            guardar = cont;

            printf("%d\n", guardar);

        }

    }

    return 0;

}

