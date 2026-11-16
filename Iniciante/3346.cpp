/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double flutuacao = 0, A = 0, B = 0;
    cin >> A >> B;
    
    flutuacao = ((1 + A/100.0) * (1 + B/100.0) - 1) * 100.0;
    
    cout << fixed << setprecision(6) << flutuacao << endl;

    return 0;
}