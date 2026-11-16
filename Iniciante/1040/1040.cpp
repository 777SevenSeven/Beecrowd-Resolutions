#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float media = 0, notaDoExame = 0, mediaFinal = 0;
    float nota1 = 0, nota2 = 0, nota3 = 0, nota4 = 0;

    // Entrada de Dados
    cin >> nota1 >> nota2 >> nota3 >> nota4;

    // Processamento de Dados
    media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 4) + (nota4 * 1)) / (2 + 3 + 4 + 1);

    cout << fixed << setprecision(1);

    // Aprovado
    if (media >= 7.0) {
        cout << "Media: " << media << "\nAluno aprovado.\n";
    }

    // Exame
    if (media >= 5.0 && media <= 6.9) {
        cin >> notaDoExame;
        cout << "Media: " << media << "\nAluno em exame.\n";
        mediaFinal = (media + notaDoExame) / 2;
        if (mediaFinal >= 5.0) {
            cout << "Nota do exame: " << notaDoExame << "\nAluno aprovado.\nMedia final: " << mediaFinal << "\n";
        }
        if (mediaFinal <= 4.9) {
            cout << "Nota do exame: " << notaDoExame << "\nAluno reprovado.\nMedia final: " << mediaFinal << "\n";
        }
    }

    // Reprovado
    if (media < 5.0) {
        cout << "Media: " << media << "\nAluno reprovado.\n";
    }

    return 0;
}
