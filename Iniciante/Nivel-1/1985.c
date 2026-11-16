/*
 * Beecrowd | 1985 - MacPRONALTS
 * Categoria: Iniciante | Nível 1 | Assunto: Matemática
 * Link: https://judge.beecrowd.com/pt/problems/view/1985
 */

/******************************************************************************

Segue o cardápio do dia contendo o número do produto e seu respectivo valor.



1001 | R$ 1.50



1002 | R$ 2.50



1003 | R$ 3.50



1004 | R$ 4.50



1005 | R$ 5.50



Entrada

A primeira entrada informada é a quantidade de produtos comprados (1 <= p <= 5). Para cada produto segue a quantidade (1 <= q <= 500) que o consumidor comprou.



Obs.: não poderão ser informados números de produtos repetidos.



Saída

Você deve imprimir o valor da compra com duas casas decimais.



Input Sample

2



1001 2

1005 3



1



1003 500



5



1001 500

1005 300

1003 23

1002 52

1004 44



Output Sample

19.50



1750.00



2808.50



*******************************************************************************/

#include <stdio.h>

#define milUm 1.50

#define milDois 2.50

#define milTres 3.50

#define milQuatro 4.50

#define milCinco 5.50



int main()

{

    //Variáveis

    int casosTeste = 0, quantidade = 0, codigoProduto = 0;

    float custo = 0;

    

    //Entrada de Dados

    scanf("%d", &casosTeste);

    

    //Desenvolvimento de Dados

    for(int i = 0; i < casosTeste; i++) {

        scanf("%d %d", &codigoProduto, &quantidade);

        if(codigoProduto == 1001) {

            custo += milUm * quantidade;

        }

        if(codigoProduto == 1002) {

            custo += milDois * quantidade;

        }

        if(codigoProduto == 1003) {

            custo += milTres * quantidade;

        }

        if(codigoProduto == 1004) {

            custo += milQuatro * quantidade;

        }

        if(codigoProduto == 1005) {

            custo += milCinco * quantidade;

        }

        

    }

    //Saída de Dados

    printf("%.2f\n", custo);

    custo = 0;

    

    return 0;

}

