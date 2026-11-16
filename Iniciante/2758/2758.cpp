#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Variáveis
    float A, B;
    double C, D;

    // Entrada de Dados
    cin >> A >> B;
    cin >> C >> D;

    // 6 casas decimais
    cout << fixed << setprecision(6);
    cout << "A = " << A << ", B = " << B << endl;
    cout << "C = " << C << ", D = " << D << endl;

    // 1 casa decimal
    cout << fixed << setprecision(1);
    cout << "A = " << A << ", B = " << B << endl;
    cout << "C = " << C << ", D = " << D << endl;

    // 2 casas decimais
    cout << fixed << setprecision(2);
    cout << "A = " << A << ", B = " << B << endl;
    cout << "C = " << C << ", D = " << D << endl;

    // 3 casas decimais
    cout << fixed << setprecision(3);
    cout << "A = " << A << ", B = " << B << endl;
    cout << "C = " << C << ", D = " << D << endl;

    // Notação científica
    cout << scientific << uppercase << setprecision(3);
    cout << "A = " << A << ", B = " << B << endl;
    cout << "C = " << C << ", D = " << D << endl;

    // Zero casas decimais = arredondamento
    cout << fixed << setprecision(0);
    cout << "A = " << A << ", B = " << B << endl;
    cout << "C = " << C << ", D = " << D << endl;

    return 0;
}