/*
 * Beecrowd | 1924 - Vitória e a Indecisão
 * Categoria: Iniciante | Nível 1 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/1924
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

    int casosTeste = 0, i = 0;

    char curso[100];

    

    scanf("%d", &casosTeste);

    for(i = 0; i < casosTeste+1; i++) {

        fgets(curso, sizeof(curso), stdin);

    }

    printf("Ciencia da Computacao\n");



    return 0;

}

