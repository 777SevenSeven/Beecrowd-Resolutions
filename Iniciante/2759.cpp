#include <iostream>
using namespace std;

int main()
{
    // Variáveis
    char A, B, C;

    // Entrada de Dados
    cin >> A;
    cin >> B;
    cin >> C;

    // Saída de Dados
    cout << "A = " << A << ", B = " << B << ", C = " << C << endl;
    cout << "A = " << B << ", B = " << C << ", C = " << A << endl;
    cout << "A = " << C << ", B = " << A << ", C = " << B << endl;

    return 0;
}