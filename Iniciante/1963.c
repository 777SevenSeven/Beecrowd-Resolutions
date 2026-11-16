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
    float valorAntigo = 0, valorNovo = 0, porcento = 0;
    
    //Entrada de Dados
    scanf("%f %f", &valorAntigo, &valorNovo);
    
    //Desenvolvimento de Dados
    porcento = (valorNovo * 100) / valorAntigo;
    porcento = porcento - 100.0;
    
    //Saída de Dados
    printf("%.2f%\n", porcento);

    return 0;
}
