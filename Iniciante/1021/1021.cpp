#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double dinheiro = 0.0;
    int cem = 0, cinquenta = 0, vinte = 0, dez = 0, cinco = 0, dois = 0, um = 0;
    int um_real = 0, cinquenta_centavos = 0, vinte_e_cinco_centavos = 0, dez_centavos = 0, cinco_centavos = 0, um_centavo = 0;

    // Entrada de Dados
    cin >> dinheiro;

    // Processamento de Dados
    // NOTAS
    cem = dinheiro / 100;
    dinheiro -= cem * 100;
    cinquenta = dinheiro / 50;
    dinheiro -= cinquenta * 50;
    vinte = dinheiro / 20;
    dinheiro -= vinte * 20;
    dez = dinheiro / 10;
    dinheiro -= dez * 10;
    cinco = dinheiro / 5;
    dinheiro -= cinco * 5;
    dois = dinheiro / 2;
    dinheiro -= dois * 2;
    um = dinheiro;

    // MOEDAS
    dinheiro = dinheiro * 100; // Converter para centavos
    um_real = dinheiro / 100;
    dinheiro -= um_real * 100;
    cinquenta_centavos = dinheiro / 50;
    dinheiro -= cinquenta_centavos * 50;
    vinte_e_cinco_centavos = dinheiro / 25;
    dinheiro -= vinte_e_cinco_centavos * 25;
    dez_centavos = dinheiro / 10;
    dinheiro -= dez_centavos * 10;
    cinco_centavos = dinheiro / 5;
    dinheiro -= cinco_centavos * 5;
    um_centavo = dinheiro;

    // Saída de Dados
    cout << "NOTAS:" << endl;
    cout << cem << " nota(s) de R$ 100.00" << endl;
    cout << cinquenta << " nota(s) de R$ 50.00" << endl;
    cout << vinte << " nota(s) de R$ 20.00" << endl;
    cout << dez << " nota(s) de R$ 10.00" << endl;
    cout << cinco << " nota(s) de R$ 5.00" << endl;
    cout << dois << " nota(s) de R$ 2.00" << endl;

    cout << "MOEDAS:" << endl;
    cout << um_real << " moeda(s) de R$ 1.00" << endl;
    cout << cinquenta_centavos << " moeda(s) de R$ 0.50" << endl;
    cout << vinte_e_cinco_centavos << " moeda(s) de R$ 0.25" << endl;
    cout << dez_centavos << " moeda(s) de R$ 0.10" << endl;
    cout << cinco_centavos << " moeda(s) de R$ 0.05" << endl;
    cout << um_centavo << " moeda(s) de R$ 0.01" << endl;

    return 0;
}
