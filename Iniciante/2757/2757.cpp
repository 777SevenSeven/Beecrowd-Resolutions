#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int A, B, C;

    cin >> A;
    cin >> B;
    cin >> C;

    // Normal
    cout << "A = " << A
         << ", B = " << B
         << ", C = " << C << endl;

    // Direita, largura 10
    cout << "A = " << right << setw(10) << A
         << ", B = " << setw(10) << B
         << ", C = " << setw(10) << C << endl;

    // Largura 10 com zeros
    cout << "A = ";

    if (A < 0)
        cout << "-" << setfill('0') << setw(9) << -A;
    else
        cout << setfill('0') << setw(10) << A;

    cout << ", B = " << setw(10) << B
         << ", C = " << setw(10) << C << endl;

    // Volta a preencher com espaços e alinha à esquerda
    cout << setfill(' ') << left
         << "A = " << setw(10) << A
         << ", B = " << setw(10) << B
         << ", C = " << setw(10) << C << endl;

    return 0;
}