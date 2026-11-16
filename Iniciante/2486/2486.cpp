#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Variáveis
    int T = 0;
    int quantidade = 0;
    int vitaminaC = 0;
    int total = 0;
    string alimento;

    // Entrada de Dados
    while(cin >> T && T != 0)
    {
        total = 0;

        for(int i = 0; i < T; i++)
        {
            cin >> quantidade;
            cin.ignore();
            getline(cin, alimento);

            // Descobrindo a quantidade de vitamina C do alimento
            if(alimento == "suco de laranja")
            {
                vitaminaC = 120;
            }
            else if(alimento == "morango fresco")
            {
                vitaminaC = 85;
            }
            else if(alimento == "mamao")
            {
                vitaminaC = 85;
            }
            else if(alimento == "goiaba vermelha")
            {
                vitaminaC = 70;
            }
            else if(alimento == "manga")
            {
                vitaminaC = 56;
            }
            else if(alimento == "laranja")
            {
                vitaminaC = 50;
            }
            else if(alimento == "brocolis")
            {
                vitaminaC = 34;
            }

            total += quantidade * vitaminaC;
        }

        // Saída de Dados
        if(total > 130)
        {
            cout << "Menos " << total - 130 << " mg" << endl;
        }
        else if(total < 110)
        {
            cout << "Mais " << 110 - total << " mg" << endl;
        }
        else
        {
            cout << total << " mg" << endl;
        }
    }

    return 0;
}