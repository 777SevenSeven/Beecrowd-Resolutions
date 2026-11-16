#include <iostream>
using namespace std;

int main() {
    int valorProduto = 0, valorDado = 0, troco = 0;

    int notas[] = {2, 5, 10, 20, 50, 100};

    while(cin >> valorProduto >> valorDado) {

        if(valorProduto == 0 && valorDado == 0) {
            break;
        }

        troco = valorDado - valorProduto;

        bool possivel = false;

        for(int i = 0; i < 6; i++) {
            for(int j = i + 1; j < 6; j++) {

                if(troco == notas[i] + notas[j]) {
                    possivel = true;
                }

            }
        }

        if(possivel) {
            cout << "possible" << endl;
        } else {
            cout << "impossible" << endl;
        }
    }

    return 0;
}