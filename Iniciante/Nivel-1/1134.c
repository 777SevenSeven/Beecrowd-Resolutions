/*
 * Beecrowd | 1134 - Tipo de Combustível
 * Categoria: Iniciante | Nível 1 | Assunto: Repetição
 * Link: https://judge.beecrowd.com/pt/problems/view/1134
 */

/******************************************************************************



Um Posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes. 

Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma: 1.Álcool 2.Gasolina 3.Diesel 4.Fim). 

Caso o usuário informe um código inválido (fora da faixa de 1 a 4) deve ser solicitado um novo código (até que seja válido). 

O programa será encerrado quando o código informado for o número 4.



Entrada

A entrada contém apenas valores inteiros e positivos.



Saída

Deve ser escrito a mensagem: "MUITO OBRIGADO" e a quantidade de clientes que abasteceram cada tipo de combustível, conforme exemplo.



Exemplo de Entrada

8

1

7

2

2

4



Exemplo de Saída

MUITO OBRIGADO

Alcool: 1

Gasolina: 2

Diesel: 0



*******************************************************************************/

#include <stdio.h>



int main()

{

    //Variáveis              //tipo 1    tipo 2         tipo 3

    int tipoCombustivel = 0, alcool = 0, gasolina = 0, diesel = 0;

    

    //Entrada de Dados

    while(1) {

        scanf("%d", &tipoCombustivel);

        

        if(tipoCombustivel == 1) {

            alcool++;

        } else if(tipoCombustivel == 2) {

            gasolina++;

        } else if(tipoCombustivel == 3) {

            diesel++;

        } else if(tipoCombustivel == 4) {

            puts("MUITO OBRIGADO");

            printf("Alcool: %d\n", alcool);

            printf("Gasolina: %d\n", gasolina);

            printf("Diesel: %d\n", diesel);

            break;

        } else {

            continue;

        }

    }



    return 0;

}

