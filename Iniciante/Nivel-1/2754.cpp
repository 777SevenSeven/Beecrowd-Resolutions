/*
 * Beecrowd | 2754 - Saída 8
 * Categoria: Iniciante | Nível 1 | Assunto: Saída
 * Link: https://judge.beecrowd.com/pt/problems/view/2754
 */

#include <iostream>

#include <iomanip>

using namespace std;



int main()

{

    double A = 234.345;

    double B = 45.698;



    // 6 casas decimais

    cout << fixed << setprecision(6);

    cout << A << " - " << B << endl;



    // 0 casas decimais

    cout << fixed << setprecision(0);

    cout << A << " - " << B << endl;



    // 1 casa decimal

    cout << fixed << setprecision(1);

    cout << A << " - " << B << endl;



    // 2 casas decimais

    cout << fixed << setprecision(2);

    cout << A << " - " << B << endl;



    // 3 casas decimais

    cout << fixed << setprecision(3);

    cout << A << " - " << B << endl;



    // Notação científica com 'e'

    cout << scientific << nouppercase << setprecision(6);

    cout << A << " - " << B << endl;



    // Notação científica com 'E'

    cout << scientific << uppercase << setprecision(6);

    cout << A << " - " << B << endl;



    // Representação mais curta com 'e'

    cout << defaultfloat << nouppercase;

    cout << A << " - " << B << endl;



    // Representação mais curta com 'E'

    cout << defaultfloat << uppercase;

    cout << A << " - " << B << endl;



    return 0;

}