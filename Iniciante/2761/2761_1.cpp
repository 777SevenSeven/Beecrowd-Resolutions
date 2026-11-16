#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    // Variaveis
    int A;
    float B;
    char C;
    string D;

    // Entrada de dados
    cin >> A >> B >> C;
    cin.ignore();
    getline(cin, D);

    // Saida de dados
    cout << fixed << setprecision(6);

    cout << A << B << C << D << endl;

    cout << A << '\t' << B << '\t' << C << '\t' << D << endl;

    cout << setw(10) << A
         << setw(10) << B
         << setw(10) << C
         << setw(10) << D << endl;

    return 0;
}