/******************************************************************************
A cada dia Jon Marius liga para um médico diferente e pergunta quanto tempo seu “aaah” deve durar.
Descubra se Jon Marius perderia seu tempo indo ao médico determinado.

Entrada
A entrada consiste em duas linhas. A primeira linha é o “aaah” que Jon Marius pode dizer naquele dia.
A segunda linha é o “aah” que o médico quer ouvir. Apenas 'a' e 'h' minúsculos serão usados na entrada, e cada linha conterá entre 0 e 999 'a's,
inclusive, seguido por um único' h '.

Saída
Envie “go” (vá, em inglês) se Jon Marius puder ir ao médico e "no” (não, em inglês) caso contrário.

Exemplos de Entrada	Exemplos de Saída
aaah
aaaaah

no

aaah
ah

go
*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Variáveis
    string ahPaciente, ahMedico;
    
    //Entrada de Dados
    cin >> ahPaciente;
    cin >> ahMedico;

    //Desenvolvimento de Dados
    if((ahPaciente.length() - 1) >= (ahMedico.length() - 1)) {
        cout << "go" << endl;
    } else {
        cout << "no" << endl;
    }
    

    return 0;
}