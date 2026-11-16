#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int Xfid, Yfid;
    int XInva, YInva;
    int velocidadeInvasor;
    int raioConjuracao, raioCorvos;

    while (cin >> Xfid >> Yfid >> XInva >> YInva
               >> velocidadeInvasor >> raioConjuracao >> raioCorvos) {

        double distancia = 0;
        double quantidadeCaminhada = 0;
        double distanciaFinal = 0;

        // Distância em metros entre eles
        distancia = sqrt(
            pow(XInva - Xfid, 2) +
            pow(YInva - Yfid, 2)
        );

        // Distância percorrida pelo invasor durante 1,5 segundos
        quantidadeCaminhada = velocidadeInvasor * 1.5;

        // Distância entre eles ao final da canalização
        distanciaFinal = distancia + quantidadeCaminhada;

        // A ultimate vai atingir?
        if (distanciaFinal <= raioConjuracao + raioCorvos) {
            cout << "Y" << endl;
        }
        else {
            cout << "N" << endl;
        }
    }

    return 0;
}