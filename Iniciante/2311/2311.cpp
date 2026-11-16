#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {

        string nome;
        double dificuldade;

        cin >> nome;
        cin >> dificuldade;

        double soma = 0;
        double maior = 0;
        double menor = 10;

        for (int j = 0; j < 7; j++) {

            double nota;
            cin >> nota;

            soma += nota;

            if (nota > maior) {
                maior = nota;
            }

            if (nota < menor) {
                menor = nota;
            }
        }

        double resultado = (soma - maior - menor) * dificuldade;

        cout << fixed << setprecision(2);
        cout << nome << " " << resultado << endl;
    }

    return 0;
}