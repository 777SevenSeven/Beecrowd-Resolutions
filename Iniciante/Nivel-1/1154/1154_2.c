/*
 * Beecrowd | 1154 - Idades
 * Categoria: Iniciante | Nível 1 | Assunto: Repetição
 * Link: https://judge.beecrowd.com/pt/problems/view/1154
 */



#include <stdio.h>



int main()

{

    int N = 0, cont = 0;

    float media = 0, soma = 0;

    //Processamento de Dados

    

    while(1) { //já que não sei quando vai parar o loop, dei uma condição infinita

        scanf("%d", &N); //recebe o número

        if(N < 0) { //se o número digitado for menor que 0 faça:

            media = soma / cont; //media recebe a soma dividido pelo número de valores digitados

            printf("%.2f\n", media); //mostre a média com 2 casas decimais

            break; //Pare o loop

        }

        cont++; //a contagem dos números aumenta

        soma = soma + N; //soma em um loop o número anterior com o próximo

    }

    return 0;

}

