/*
 * Beecrowd | 2670 - Máquina de Café
 * Categoria: Iniciante | Nível 3 | Assunto: Seleção
 * Link: https://judge.beecrowd.com/pt/problems/view/2670
 */

#include <stdio.h>



int main() {



    int A1, A2, A3;



    scanf("%d", &A1);

    scanf("%d", &A2);

    scanf("%d", &A3);



    int andar1 = A2 * 2 + A3 * 4;

    int andar2 = A1 * 2 + A3 * 2;

    int andar3 = A1 * 4 + A2 * 2;



    int menor = andar1;



    if (andar2 < menor) {

        menor = andar2;

    }



    if (andar3 < menor) {

        menor = andar3;

    }



    printf("%d\n", menor);



    return 0;

}