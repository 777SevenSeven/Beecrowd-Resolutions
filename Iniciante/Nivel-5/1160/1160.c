/*
 * Beecrowd | 1160 - Crescimento Populacional
 * Categoria: Iniciante | Nível 5 | Assunto: Repetição
 * Link: https://judge.beecrowd.com/pt/problems/view/1160
 */

/******************************************************************************

Mariazinha quer resolver um problema interessante. 

Dadas as informações de população e a taxa de crescimento de duas cidades quaisquer (A e B),

ela gostaria de saber quantos anos levará para que a cidade menor (sempre é a cidade A) ultrapasse a cidade B em população.

Claro que ela quer saber APENAS PARA as cidades cuja taxa de crescimento da cidade A É MAIOR DO QUE a taxa de crescimento da cidade B,

portanto, previamente já separou para você apenas os casos de teste que tem a taxa de crescimento maior para a cidade A.

Sua tarefa é construir um programa que apresente o tempo em anos para cada caso de teste.



Porém, em alguns casos o tempo pode ser muito grande, e Mariazinha não se interessa em saber exatamente o tempo para estes casos.

Basta que você informe, nesta situação, a mensagem "Mais de 1 seculo.".



Entrada

G1, G2 indicando respectivamente o crescimento populacional de A e B (em percentual).



Atenção: A população é sempre um valor inteiro, portanto, um crescimento de 2.5 % sobre uma população de 100 pessoas resultará em 102 pessoas, e não 102.5 pessoas,

enquanto um crescimento de 2.5% sobre uma população de 1000 pessoas resultará em 1025 pessoas. 

Além disso, não utilize variáveis de precisão simples para as taxas de crescimento.



Saída

Imprima, para cada caso de teste, quantos anos levará para que a cidade A ultrapasse a cidade B em número de habitantes. 

Obs.: se o tempo for mais do que 100 anos o programa deve apresentar a mensagem: Mais de 1 seculo.

Neste caso, acredito que seja melhor interromper o programa imediatamente após passar de 100 anos,

caso contrário você poderá receber como resposta da submissão deste problema "Time Limit Exceeded".



Exemplo de Entrada

6

100 150 1.0 0

90000 120000 5.5 3.5

56700 72000 5.2 3.0

123 2000 3.0 2.0

100000 110000 1.5 0.5

62422 484317 3.1 1.0

*******************************************************************************/

#include <stdio.h>



int main()

{

    //variáveis

    int T = 0, i = 0, PA = 0, PB = 0, anosNecessarios = 0;

    double G1 = 0, G2 = 0;

    

    //Entrada de Dados

    scanf("%d", &T);

    

    for(i = 0; i < T; i++) {

        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);

        anosNecessarios = 0; //zerar antes do próximo cálculo, para evitar lixo de memória.

        

        //Desenvolvimento de Dados

        while(1) {

            PA+= (int) (G1 * PA / 100);

            PB+= (int) (G2 * PB / 100);

            anosNecessarios++;

            

            //Saída de Dados

            if(anosNecessarios > 100) {

               printf("Mais de 1 seculo.\n");

               break;

            }

            

            if(PA > PB) {

                printf("%d anos.\n", anosNecessarios);

                break;

            }

            

        }

        

    }



    return 0;

}

