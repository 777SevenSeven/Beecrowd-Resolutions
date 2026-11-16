/******************************************************************************

Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares entre eles.

Entrada
O arquivo de entrada contém dois valores inteiros.

Saída
O programa deve imprimir um valor inteiro. Este valor é a soma dos valores ímpares que estão entre os valores fornecidos na entrada que deverá caber em um inteiro.

Exemplo de Entrada	Exemplo de Saída
6
-5

5

15
12

13

12
12

0

*******************************************************************************/
#include <stdio.h>

int main()
{
    //Variáveis
    int numMaximoA = 0, numMaximoB = 0, somaNumImparA = 0, somaNumImparB = 0, somaAB = 0, i = 0;
    
    //Entrada de Dados
    scanf("%d", &numMaximoA); //vai receber um número limitando a soma dos impares
    scanf("%d", &numMaximoB); //aqui o mesmo se repete, porém em outro "pedido"
    
    //Desenvolvimento de Dados
    if(numMaximoA > numMaximoB) { //se o numMáximoA (digamos 6) for maior que o numMáximoB (digamos -5), faça esse loop abaixo
        for(i = numMaximoB+1; i < numMaximoA; i++) { //um loop em que i é igual à -5, se o -5 for menor que o 6, -5 aumenta 1
            if((i % 2) != 0) { //se o resto da divisão de -5 por 2 resultar em diferente de 0, é impar
                somaAB = (i + somaAB); //daí somaAB recebe o -5 (numero inicial do teste)
                }
            }
    } else { //caso NumMaximoB for maior que A
        //Desenvolvimento de Dados
        for(i = numMaximoA+1; i < numMaximoB; i++) { //
            if((i % 2) != 0) {    
                somaAB = i + somaAB;
                }
            }
    }
    
    //Saída de Dados
    printf("%d\n", somaAB);
       
    
    return 0;
}