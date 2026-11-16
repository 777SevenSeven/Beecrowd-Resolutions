/*
 * Beecrowd | 2310 - Voleibol
 * Categoria: Iniciante | Nível 2 | Assunto: Vetores
 * Link: https://judge.beecrowd.com/pt/problems/view/2310
 */

#include <iostream>

#include <iomanip>

#include <string>



using namespace std;



int main() {



    int n;

    cin >> n;



    int totalSaques = 0;

    int totalBloqueios = 0;

    int totalAtaques = 0;



    int sucessosSaques = 0;

    int sucessosBloqueios = 0;

    int sucessosAtaques = 0;



    for (int i = 0; i < n; i++) {



        string nome;

        cin >> nome;



        int saques, bloqueios, ataques;

        cin >> saques >> bloqueios >> ataques;



        int saquesSucesso, bloqueiosSucesso, ataquesSucesso;

        cin >> saquesSucesso >> bloqueiosSucesso >> ataquesSucesso;



        totalSaques += saques;

        totalBloqueios += bloqueios;

        totalAtaques += ataques;



        sucessosSaques += saquesSucesso;

        sucessosBloqueios += bloqueiosSucesso;

        sucessosAtaques += ataquesSucesso;

    }



    double percentualSaques =

        (double) sucessosSaques / totalSaques * 100;



    double percentualBloqueios =

        (double) sucessosBloqueios / totalBloqueios * 100;



    double percentualAtaques =

        (double) sucessosAtaques / totalAtaques * 100;



    cout << fixed << setprecision(2);



    cout << "Pontos de Saque: " << percentualSaques << " %." << endl;

    cout << "Pontos de Bloqueio: " << percentualBloqueios << " %." << endl;

    cout << "Pontos de Ataque: " << percentualAtaques << " %." << endl;



    return 0;

}