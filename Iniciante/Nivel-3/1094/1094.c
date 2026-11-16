/*
 * Beecrowd | 1094 - Experiências
 * Categoria: Iniciante | Nível 3 | Assunto: Repetição
 * Link: https://judge.beecrowd.com/pt/problems/view/1094
 */

/******************************************************************************

Entrada

A primeira linha de entrada contém um valor inteiro N que indica os vários casos de teste que vem a seguir. Cada caso de teste contém um inteiro Quantia (1 ≤ Quantia ≤ 15) que representa a quantidade de cobaias utilizadas e um caractere Tipo ('C', 'R' ou 'S'), indicando o tipo de cobaia (R:Rato S:Sapo C:Coelho).



Saída

Apresente o total de cobaias utilizadas, o total de cada tipo de cobaia utilizada e o percentual de cada uma em relação ao total de cobaias utilizadas, sendo que o percentual deve ser apresentado com dois dígitos após o ponto.



Exemplo de Entrada	

10

10 C

6 R

15 S

5 C

14 R

9 C

6 R

8 S

5 C

14 R



Exemplo de Saída

Total: 92 cobaias

Total de coelhos: 29

Total de ratos: 40

Total de sapos: 23

Percentual de coelhos: 31.52 %

Percentual de ratos: 43.48 %

Percentual de sapos: 25.00 %



*******************************************************************************/

#include <stdio.h>



int main()

{

    //Variáveis

    float porcentagemC = 0, porcentagemR = 0, porcentagemS = 0;

    int coelhos = 0, ratos = 0, sapos = 0, N = 0;

    int totalCobaias = 0,  i = 0, num = 0;

    

    char tipo = 0;

    

    //Entrada de Dados

    scanf("%d", &N);

    

    for(i = 0; i < N; i++) {

        scanf("%d %c", &num, &tipo);

        

        //Verificação do tipo dos animais de acordo com a segunda letra acompanhando o num

        if(tipo == 'C') {

            coelhos = num + coelhos;

        }

        else if(tipo == 'R') {

            ratos = num + ratos;

        }

        else if (tipo == 'S') {

            sapos = num + sapos;

        };

    }

    

    totalCobaias = coelhos + ratos + sapos;

        

    //Operação Matemática de conseguir as porcentagens do total (N)

    porcentagemC = (coelhos * 100.0) / totalCobaias;

    porcentagemR = (ratos * 100.0) / totalCobaias;

    porcentagemS = (sapos * 100.0) / totalCobaias;

    

    printf("Total: %d cobaias\n", totalCobaias);

    printf("Total de coelhos: %d\n", coelhos);

    printf("Total de ratos: %d\n", ratos);

    printf("Total de sapos: %d\n", sapos);

    printf("Percentual de coelhos: %.2f %%\n", porcentagemC);

    printf("Percentual de ratos: %.2f %%\n", porcentagemR);

    printf("Percentual de sapos: %.2f %%\n", porcentagemS);



    return 0;

}

