#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    //Variáveis
    float circunferencia = 0, R = 0;
    
    //Entrada de Dados
    cin >> R;
    //Desenvolvimento de Dados
    circunferencia = (R * 2) * 3.14;
    //Saída de Dados
    cout << fixed << setprecision(2) << circunferencia << endl;
    
    return 0;
}