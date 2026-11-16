/*
 * Beecrowd | 1021 - Notas e Moedas
 * Categoria: Iniciante | Nível 6 | Assunto: Sequencial
 * Link: https://judge.beecrowd.com/pt/problems/view/1021
 */

#include <stdio.h>



int main() {

    double dinheiro = 0.0;

    int cem = 0, cinquenta = 0, vinte = 0, dez = 0, cinco = 0, dois = 0, um = 0;

    int um_real = 0, cinquenta_centavos = 0, vinte_e_cinco_centavos = 0, dez_centavos = 0, cinco_centavos = 0, um_centavo = 0;



    // Entrada de Dados

    scanf("%lf", &dinheiro);

    

    // Processamento de Dados

    // NOTAS

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



    // MOEDAS

    dinheiro = dinheiro * 100; // Converter para centavos

    um_real = dinheiro / 100;

    dinheiro -= um_real * 100;

    cinquenta_centavos = dinheiro / 50;

    dinheiro -= cinquenta_centavos * 50;

    vinte_e_cinco_centavos = dinheiro / 25;

    dinheiro -= vinte_e_cinco_centavos * 25;

    dez_centavos = dinheiro / 10;

    dinheiro -= dez_centavos * 10;

    cinco_centavos = dinheiro / 5;

    dinheiro -= cinco_centavos * 5;

    um_centavo = dinheiro;



    // Saída de Dados

    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n", cem);

    printf("%d nota(s) de R$ 50.00\n", cinquenta);

    printf("%d nota(s) de R$ 20.00\n", vinte);

    printf("%d nota(s) de R$ 10.00\n", dez);

    printf("%d nota(s) de R$ 5.00\n", cinco);

    printf("%d nota(s) de R$ 2.00\n", dois);

    

    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n", um_real);

    printf("%d moeda(s) de R$ 0.50\n", cinquenta_centavos);

    printf("%d moeda(s) de R$ 0.25\n", vinte_e_cinco_centavos);

    printf("%d moeda(s) de R$ 0.10\n", dez_centavos);

    printf("%d moeda(s) de R$ 0.05\n", cinco_centavos);

    printf("%d moeda(s) de R$ 0.01\n", um_centavo);

    

    return 0;

}

