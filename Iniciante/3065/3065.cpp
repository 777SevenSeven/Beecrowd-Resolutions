#include <iostream>
using namespace std;

int main()
{
    // Variáveis
    int numerosTestar = 0;
    int numeroTeste = 1;

    // Entrada de Dados
    while(cin >> numerosTestar && numerosTestar != 0)
    {
        string expressao;
        cin >> expressao;

        // Desenvolvimento de Dados
        int resultado = 0;
        int numero = 0;
        char operador = '+';

        for(int i = 0; i < expressao.length(); i++)
        {
            char caractere = expressao[i];

            // Se for número
            if(caractere >= '0' && caractere <= '9')
            {
                numero = numero * 10 + (caractere - '0');
            }

            // Se for operador
            else
            {
                if(operador == '+')
                {
                    resultado += numero;
                }
                else
                {
                    resultado -= numero;
                }

                numero = 0;
                operador = caractere;
            }
        }

        // Aplica o último número da expressão
        if(operador == '+')
        {
            resultado += numero;
        }
        else
        {
            resultado -= numero;
        }

        // Saída de Dados
        cout << "Teste " << numeroTeste << endl;
        cout << resultado << endl;
        cout << endl;

        numeroTeste++;
    }

    return 0;
}