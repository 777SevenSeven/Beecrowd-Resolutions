/*
 * Beecrowd | 1094 - Experiências
 * Categoria: Iniciante | Nível 3 | Assunto: Repetição
 * Link: https://judge.beecrowd.com/pt/problems/view/1094
 */

#include <iostream>

#include <iomanip>

using namespace std;



int main() {

    int N;

    cin >> N;



    int coelhos = 0, ratos = 0, sapos = 0;



    for (int i = 0; i < N; i++) {

        int num;

        char tipo;

        cin >> num >> tipo;



        if (tipo == 'C') {

            coelhos += num;

        } else if (tipo == 'R') {

            ratos += num;

        } else if (tipo == 'S') {

            sapos += num;

        }

    }



    int totalCobaias = coelhos + ratos + sapos;



    double porcentagemC = (coelhos * 100.0) / totalCobaias;

    double porcentagemR = (ratos * 100.0) / totalCobaias;

    double porcentagemS = (sapos * 100.0) / totalCobaias;



    cout << "Total: " << totalCobaias << " cobaias" << endl;

    cout << "Total de coelhos: " << coelhos << endl;

    cout << "Total de ratos: " << ratos << endl;

    cout << "Total de sapos: " << sapos << endl;



    cout << fixed << setprecision(2);

    cout << "Percentual de coelhos: " << porcentagemC << " %" << endl;

    cout << "Percentual de ratos: " << porcentagemR << " %" << endl;

    cout << "Percentual de sapos: " << porcentagemS << " %" << endl;



    return 0;

}

