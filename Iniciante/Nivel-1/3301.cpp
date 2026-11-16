/*
 * Beecrowd | 3301 - Sobrinho do Meio
 * Categoria: Iniciante | Nível 1 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/3301
 */

#include <iostream>

#include <algorithm>

using namespace std;

 

int main() {

 

    int A = 0, B = 0, C = 0;

    cin >> A >> B >> C;

    

    int valores[3] = {A, B, C};

    

    int maior = *max_element(valores, valores+3);

    int menor = *min_element(valores, valores+3);

    

    for(int i = 0; i < 3; i++) {

        if(valores[i] != maior && valores[i] != menor) {

            if(i == 0)

            cout << "huguinho" << endl;

            if(i == 1)

            cout << "zezinho" << endl;

            if(i == 2)

            cout << "luisinho" << endl;

        }

    }

 

    return 0;

}