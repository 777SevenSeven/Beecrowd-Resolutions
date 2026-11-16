/******************************************************************************

Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

Entrada
Não há nenhuma entrada neste problema.

Saída
Imprima a sequencia conforme exemplo abaixo.

Exemplo de Entrada	Exemplo de Saída
I=0 J=1
I=0 J=2
I=0 J=3
I=0.2 J=1.2
I=0.2 J=2.2
I=0.2 J=3.2
.....
I=2 J=?
I=2 J=?
I=2 J=?

*******************************************************************************/
#include <stdio.h>

int main()
{
    // Irei tentar usar inteiros para controlar o loop para evitar o erro de precisão
    // i vai de 0 a 20 (representando 0.0 a 2.0)
    //Variáveis
    int i_int; 
    float I, J;

    for (i_int = 0; i_int <= 20; i_int += 2) {
        
        // Converterei para float apenas na hora de usar
        I = i_int / 10.0;
        J = 1.0 + I; // J sempre acompanha o I

        // Se o contador for 0, 10 ou 20, significa que I é 0.0, 1.0 ou 2.0 (Inteiros)
        if (i_int == 0 || i_int == 10 || i_int == 20) {
            printf("I=%.0f J=%.0f\n", I, J);
            printf("I=%.0f J=%.0f\n", I, J + 1.0);
            printf("I=%.0f J=%.0f\n", I, J + 2.0);
        } 
        else {
            // Caso contrário, imprimirá com uma casa decimal
            printf("I=%.1f J=%.1f\n", I, J);
            printf("I=%.1f J=%.1f\n", I, J + 1.0);
            printf("I=%.1f J=%.1f\n", I, J + 2.0);
        }
    }

    return 0;
}
    /*Vamos ao raciocinio crú: Eu preciso que sempre que um count der 10 (por exemplo count+3 até 10) o printf faça o print de um
    Número inteiro ao invés de um float, por pelo menos 3x, daí depois ele repete novamente o ciclo, até que I == 2. O I TEM que
    ser float obrigatóriamente pra lidarmos com a troca (talvez por um I inteiro?) e já o J...tá dando certo já, nem preciso mecher
    porém as 3 primeiras printadas dele sim. */

