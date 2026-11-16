/*
 * Beecrowd | 1847 - Bem-vindos e Bem-vindas ao Inverno!
 * Categoria: Iniciante | Nível 4 | Assunto: Ad hoc
 * Link: https://judge.beecrowd.com/pt/problems/view/1847
 */

#include <iostream>

using namespace std;



int main() {

    int A, B, C;

    cin >> A >> B >> C;



    int TdoisMenosTum = B - A;

    int TtresMenosTdois = C - B;



    if (TdoisMenosTum < 0 && (TtresMenosTdois >= 0)) { // Caso 1 feliz

        cout << ":)" << endl;

    } else if (TdoisMenosTum > 0 && (TtresMenosTdois <= 0)) { // Caso 2 triste

        cout << ":(" << endl;

    } else if (TdoisMenosTum > 0 && TtresMenosTdois > 0 && (TtresMenosTdois < TdoisMenosTum)) { // Caso 3 triste

        cout << ":(" << endl;

    } else if (TdoisMenosTum > 0 && TtresMenosTdois > 0 && (TtresMenosTdois >= TdoisMenosTum)) { // Caso 4 feliz

        cout << ":)" << endl;

    } else if (TdoisMenosTum < 0 && TtresMenosTdois < 0 && (-TtresMenosTdois < -TdoisMenosTum)) { // Caso 5 feliz

        cout << ":)" << endl;

    } else if (TdoisMenosTum < 0 && TtresMenosTdois < 0 && (-TtresMenosTdois >= -TdoisMenosTum)) { // Caso 6 triste

        cout << ":(" << endl;

    } else if (TdoisMenosTum == 0 && TtresMenosTdois > 0) { // Caso 7 feliz

        cout << ":)" << endl;

    } else if (TdoisMenosTum == 0 && TtresMenosTdois <= 0) { // Caso 8 triste

        cout << ":(" << endl;

    }



    return 0;

}

