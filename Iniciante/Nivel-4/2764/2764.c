/*
 * Beecrowd | 2764 - Entrada e Saída de Data
 * Categoria: Iniciante | Nível 4 | Assunto: Data
 * Link: https://judge.beecrowd.com/pt/problems/view/2764
 */

/******************************************************************************

O seu professor gostaria de fazer um programa com as seguintes características:



Leia uma data no formato DD/MM/AA;

Imprima a data no formato MM/DD/AA;

Imprima a data no formato AA/MM/DD;

Imprima a data no formato DD-MM-AA.

Entrada

A entrada consiste vários arquivos de teste. 

Em cada arquivo de teste tem uma linha. A linha tem o seguinte formato DD/MM/AA onde DD, MM, AA são números inteiros.

Conforme mostrado no exemplo de entrada a seguir.



Saída

Para cada arquivo da entrada, terá um arquivo de saída. O arquivo de saída tem três linhas conforme os procedimentos 2, 3 e 4.

Conforme mostra o exemplo de saída a seguir.



Exemplos de Entrada

02/08/10



Exemplos de Saída

08/02/10



10/08/02



02-08-10



Exemplos de Entrada

29/07/03



Exemplos de Saída

07/29/03



03/07/29



29-07-03

*******************************************************************************/

#include <stdio.h>



int main()

{

    //Variáveis

    int AA = 0, MM = 0, DD = 0;

    char data_str[11];

    

    //Entrada de Dados

    if (scanf("%10s", data_str) != 1) {

        printf("Erro na leitura da data.\n");

        return 1;

    }

    

    // Extrai dia, mês e ano da string

    if (sscanf(data_str, "%d/%d/%d", &DD, &MM, &AA) != 3) {

        printf("Formato inválido. Use dd/mm/aa.\n");

        return 1;

    }

    

    

    //Saída de Dados

    printf("%02d/%02d/%02d\n", MM, DD, AA);

    printf("%02d/%02d/%02d\n", AA, MM, DD);

    printf("%02d-%02d-%02d\n", DD, MM, AA);

    

    

    return 0;

}

