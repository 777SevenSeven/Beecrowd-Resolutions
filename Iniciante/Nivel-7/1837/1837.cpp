/*
 * Beecrowd | 1837 - Prefácio
 * Categoria: Iniciante | Nível 7 | Assunto: Ad hoc
 * Link: https://judge.beecrowd.com/pt/problems/view/1837
 */

#include <iostream>

using namespace std;



int main() {

    int a, b;

    cin >> a >> b;



    int q = a / b;

    int r = a % b;



    if (r < 0) {

        if (b > 0) {

            q -= 1;

            r += b;

        } else {

            q += 1;

            r -= b;

        }

    }



    cout << q << " " << r << endl;



    return 0;

}

