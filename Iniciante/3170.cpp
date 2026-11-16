/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Variáveis
    int B = 0, G = 0, bolinhasRestantes = 0;
    
    //Entrada de Dados
    cin >> B;
    cin >> G;
    
    //Desenvolvimento de Dados
    bolinhasRestantes = (G / 2) - B;
    
    //Saída de Dados
    if(bolinhasRestantes > 0) {
        cout << "Faltam " << bolinhasRestantes << " bolinha(s)" << endl;
    } else {
        cout << "Amelia tem todas bolinhas!" << endl;
    }

    return 0;
}