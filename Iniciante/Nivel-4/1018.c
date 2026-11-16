/*
 * Beecrowd | 1018 - Cédulas
 * Categoria: Iniciante | Nível 4 | Assunto: Sequencial
 * Link: https://judge.beecrowd.com/pt/problems/view/1018
 */

#include <stdio.h>



int main() {

    int dinheiro = 0, cem = 0, cinquenta = 0, vinte = 0, dez = 0, cinco = 0, dois = 0, um = 0;

    

    // Entrada de Dados

    scanf("%d", &dinheiro);

    

    // Processamento e Saída de Dados

    printf("%d\n", dinheiro);



    cem = dinheiro / 100;

    dinheiro -= cem * 100;



    cinquenta = dinheiro / 50;

    dinheiro -= cinquenta * 50;



    vinte = dinheiro / 20;

    dinheiro -= vinte * 20;



    dez = dinheiro / 10;

    dinheiro -= dez * 10;



    cinco = dinheiro / 5;

    dinheiro -= cinco * 5;



    dois = dinheiro / 2;

    dinheiro -= dois * 2;



    um = dinheiro;

    

    printf("%d nota(s) de R$ 100,00\n", cem);

    printf("%d nota(s) de R$ 50,00\n", cinquenta);

    printf("%d nota(s) de R$ 20,00\n", vinte);

    printf("%d nota(s) de R$ 10,00\n", dez);

    printf("%d nota(s) de R$ 5,00\n", cinco);

    printf("%d nota(s) de R$ 2,00\n", dois);

    printf("%d nota(s) de R$ 1,00\n", um);

    

    return 0;

}

