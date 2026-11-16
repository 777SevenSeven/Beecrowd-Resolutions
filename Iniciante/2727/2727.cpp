#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    int N;

    while (cin >> N)
    {
        cin.ignore();

        while (N--)
        {
            string codigo;
            getline(cin, codigo);

            stringstream ss(codigo);

            string grupo;
            int quantidadeGrupos = 0;
            int pontos = 0;

            while (ss >> grupo)
            {
                quantidadeGrupos++;

                if (quantidadeGrupos == 1)
                    pontos = grupo.size();
            }

            int posicao = (quantidadeGrupos - 1) * 3 + pontos;

            cout << char('a' + posicao - 1) << endl;
        }
    }

    return 0;
}