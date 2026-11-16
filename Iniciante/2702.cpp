#include <iostream>
using namespace std;

int main() {
    
    // Variáveis
    int quantiaFrango = 0, quantiaBife = 0, quantiaMassa = 0; 
    int requisitadoFrango = 0, requisitadoBife = 0, requisitadoMassa = 0;
    int frangoRestante = 0, bifeRestante = 0, massaRestante = 0;
    int passageirosSemComer = 0;
    
    // Entrada de Dados
    cin >> quantiaFrango >> quantiaBife >> quantiaMassa;
    cin >> requisitadoFrango >> requisitadoBife >> requisitadoMassa;
    
    // Desenvolvimento de Dados
    frangoRestante = quantiaFrango - requisitadoFrango;
    bifeRestante = quantiaBife - requisitadoBife;
    massaRestante = quantiaMassa - requisitadoMassa;
    
    if(frangoRestante < 0) {
        passageirosSemComer += -frangoRestante;
    }

    if(bifeRestante < 0) {
        passageirosSemComer += -bifeRestante;
    }

    if(massaRestante < 0) {
        passageirosSemComer += -massaRestante;
    }
    
    // Saída de Dados
    cout << passageirosSemComer << endl;
    
    return 0;
}