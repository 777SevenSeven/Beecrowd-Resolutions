/*
 * Beecrowd | 2152 - Pepe, Já Tirei a Vela!
 * Categoria: Iniciante | Nível 1 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2152
 */

#include <stdio.h>



int main() {



    int casosTeste;

    scanf("%d", &casosTeste);



    for (int i = 0; i < casosTeste; i++) {



        int hora;

        int minuto;

        int fechouOuNao;



        scanf("%d %d %d", &hora, &minuto, &fechouOuNao);



        if (fechouOuNao == 1) {

            printf("%02d:%02d - A porta abriu!\n", hora, minuto);

        }

        else {

            printf("%02d:%02d - A porta fechou!\n", hora, minuto);

        }

    }



    return 0;

}