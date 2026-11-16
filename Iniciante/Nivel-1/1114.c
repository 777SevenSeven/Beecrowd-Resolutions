/*
 * Beecrowd | 1114 - Senha Fixa
 * Categoria: Iniciante | Nível 1 | Assunto: Repetição
 * Link: https://judge.beecrowd.com/pt/problems/view/1114
 */

/******************************************************************************



Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura de senha incorreta informada, escrever a mensagem "Senha Invalida". Quando a senha for informada corretamente deve ser impressa a mensagem "Acesso Permitido" e o algoritmo encerrado. Considere que a senha correta é o valor 2002. 



Entrada

A entrada é composta por vários casos de testes contendo valores inteiros.



Saída

Para cada valor lido mostre a mensagem correspondente à descrição do problema.



Exemplo de Entrada	Exemplo de Saída

2200

1020

2022

2002



Senha Invalida

Senha Invalida

Senha Invalida

Acesso Permitido



*******************************************************************************/

#include <stdio.h>

#define senha 2002



int main()

{

    //Variáveis

    int num = 0;

    

    while(num != senha) {

        //Entrada de Dados

        scanf("%d", &num);

        

        //Desenvolvimento e Saída de Dados

        if(num == senha) {

            printf("Acesso Permitido\n");

        } else {

            printf("Senha Invalida\n");

        }

    };



    return 0;

}

