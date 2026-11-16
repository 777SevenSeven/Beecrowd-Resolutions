/******************************************************************************

LEIA um valor inteiro N que é a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste de dois inteiros X e Y. 

Você deve APRESENTAR a soma de Y ímpares consecutivos A PARTIR DE X INCLUSIVE o próprio X SE ele for ímpar. Por exemplo:

para a entrada 4 5, a saída deve ser 45, que é equivalente à: 5 + 7 + 9 + 11 + 13

para a entrada 7 4, a saída deve ser 40, que é equivalente à: 7 + 9 + 11 + 13

Entrada
A primeira linha de entrada é um inteiro N que é a quantidade de casos de teste que vem a seguir.
Cada caso de teste consiste em uma linha contendo dois inteiros X e Y.

Saída
Imprima a soma dos consecutivos números ímpares a partir do valor X.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //Variáveis
    int N = 0, impares = 0, Y = 0, X = 0, i = 0, soma = 0;
    
    //Entrada de Dados
    scanf("%d", &N); //N é o número máximo de casos de entrada
    
    for(i = 0; i < N; i++) { //contador inicializa em 0 e ele faz um loop sempre que menor que N (digamos que N = 2), então i + 1 = 1 no final do loop 1
        scanf("%d", &X); //4
        scanf("%d", &Y); //3
    
    //Desenvolvimento de Dados
    while(impares < Y) { //encontrar ímpares no intervalo correto (contador = 0, 4 é o máximo) <- número de loops
        if((X % 2) != 0) { //digamos que X veio 5
                impares++; //primeiro impar contabilizado
                soma = soma + X;
                X+=2; //vira outro impar (X = X + 2) e fica assim até o final
        } else { //digamos que X veio 6
            X+=1; //X vira 7, oque é impar, então eu contabilizo abaixo, e fica num loop até acabar
        }
    }
    
    //Saída de Dados
    printf("%d\n", soma);
    impares = 0;
    soma = 0;
}
    return 0;
}
