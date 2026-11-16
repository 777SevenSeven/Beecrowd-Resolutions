/*
 * Beecrowd | 1038 - Lanche
 * Categoria: Iniciante | Nível 1 | Assunto: Seleção
 * Link: https://judge.beecrowd.com/pt/problems/view/1038
 */

#include <stdio.h>

 

int main() {

    int codigo = 0, quantidade = 0;

    float preco = 0, valorTotal = 0;

    

    //Entrada de Dados

    scanf("%d %d", &codigo, &quantidade);

    

    //Processamento de Dados

    switch(codigo){

        case 1: preco = 4.00;

               valorTotal = quantidade * preco;

               printf("Total: R$ %.2f\n",valorTotal);

               break;

               

        case 2: preco = 4.50;

               valorTotal = quantidade * preco;

               printf("Total: R$ %.2f\n", valorTotal);

               break;

               

        case 3: preco = 5.00;

               valorTotal = quantidade * preco;

               printf("Total: R$ %.2f\n", valorTotal);

               break;

        case 4: preco = 2.00;

               valorTotal = quantidade * preco;

               printf("Total: R$ %.2f\n", valorTotal);

               break;

        case 5: preco = 1.50;

               valorTotal = quantidade * preco;

               printf("Total: R$ %.2f\n", valorTotal);

               break;

    }

 

    return 0;

}