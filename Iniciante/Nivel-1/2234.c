/*
 * Beecrowd | 2234 - Cachorros-Quentes
 * Categoria: Iniciante | Nível 1 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2234
 */

/******************************************************************************



Welcome to GDB Online.

GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,

C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.

Code, Compile, Run and Debug online from anywhere in world.



*******************************************************************************/

#include <stdio.h>



int main()

{

    //Variáveis

    int CachorroQuente = 0, Participantes = 0;

    float media = 0;

    

    //Entrada de Dados

    scanf("%d %d", &CachorroQuente, &Participantes);

    

    //Desenvolvimento de Dados

    media = ((float)CachorroQuente / (float)Participantes);

    

    //Saída de Dados

    printf("%.2f\n", media);



    return 0;

}

