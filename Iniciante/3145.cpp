#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    //Variáveis
    int N = 0, X = 0;
    float dias = 0;
    
    //Entrada de Dados
    cin >> N >> X;
    
    //Desenvolvimento de Dados
    N+=2;
    dias = (float)X / N;
    
    //Saída de Dados
    cout << fixed << setprecision(2) << dias << endl;
    
    return 0;
}