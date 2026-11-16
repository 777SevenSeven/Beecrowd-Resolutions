/*
 * Beecrowd | 2764 - Entrada e Saída de Data
 * Categoria: Iniciante | Nível 4 | Assunto: Data
 * Link: https://judge.beecrowd.com/pt/problems/view/2764
 */

#include <iostream>

#include <iomanip>

using namespace std;



int main() {

    int DD, MM, AA;

    char barra;



    // Entrada no formato DD/MM/AA

    cin >> DD >> barra >> MM >> barra >> AA;



    // Saída nos formatos solicitados

    cout << setw(2) << setfill('0') << MM << "/"

         << setw(2) << setfill('0') << DD << "/"

         << setw(2) << setfill('0') << AA << endl;



    cout << setw(2) << setfill('0') << AA << "/"

         << setw(2) << setfill('0') << MM << "/"

         << setw(2) << setfill('0') << DD << endl;



    cout << setw(2) << setfill('0') << DD << "-"

         << setw(2) << setfill('0') << MM << "-"

         << setw(2) << setfill('0') << AA << endl;



    return 0;

}

