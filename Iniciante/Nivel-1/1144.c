/*
 * Beecrowd | 1144 - Sequência Lógica
 * Categoria: Iniciante | Nível 1 | Assunto: Repetição
 * Link: https://judge.beecrowd.com/pt/problems/view/1144
 */

/******************************************************************************



Escreva um programa que leia um valor inteiro N. N * 2 linhas de saída serão apresentadas na execução do programa, 

seguindo a lógica do exemplo abaixo. Para valores com mais de 6 dígitos, todos os dígitos devem ser apresentados.



Entrada

O arquivo de entrada contém um número inteiro positivo N (1 < N < 1000).



Saída

Imprima a saída conforme o exemplo fornecido.



Exemplo de Entrada

5



Exemplo de Saída

1 1 1

1 2 2

2 4 8

2 5 9

3 9 27

3 10 28

4 16 64

4 17 65

5 25 125

5 26 126



*******************************************************************************/

#include <stdio.h>



int main()

{

    //Variáveis

    int maximo = 0, N = 0, NVezesDois = 0, NVezesDoisDenovo = 0, i = 1;

    

    //Entrada de Dados

    scanf("%d", &maximo);

    

    //Desenvolvimento de Dados

    for(i = 1; i <= maximo; i++) {

        N = i;

        NVezesDois = N * i;

        NVezesDoisDenovo = NVezesDois * i;

        

        printf("%d %d %d\n", N, NVezesDois, NVezesDoisDenovo);

        printf("%d %d %d\n", N, NVezesDois+1, NVezesDoisDenovo+1);

    }

    

    //Saída de Dados

    



    return 0;

}

