/*
 * Beecrowd | 2867 - Dígitos
 * Categoria: Iniciante | Nível 5 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2867
 */

#include <stdio.h>

#include <math.h>



int main() {

    int casosTeste;

    scanf("%d", &casosTeste);



    for (int i = 0; i < casosTeste; i++) {

        int N, M;

        scanf("%d %d", &N, &M);



        // Fórmula: número de dígitos = floor(M * log10(N)) + 1

        int digitos = (int)(floor(M * log10((double)N)) + 1);



        printf("%d\n", digitos);

    }



    return 0;

}

