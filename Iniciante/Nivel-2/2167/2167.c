/*
 * Beecrowd | 2167 - Falha do Motor
 * Categoria: Iniciante | Nível 2 | Assunto: Ad hoc, Vetor
 * Link: https://judge.beecrowd.com/pt/problems/view/2167
 */

#include <stdio.h>



int main() {



    int n;

    scanf("%d", &n);



    int anterior;

    scanf("%d", &anterior);



    int resposta = 0;



    for (int i = 2; i <= n; i++) {



        int atual;

        scanf("%d", &atual);



        if (resposta == 0 && atual < anterior) {

            resposta = i;

        }



        anterior = atual;

    }



    printf("%d\n", resposta);



    return 0;

}