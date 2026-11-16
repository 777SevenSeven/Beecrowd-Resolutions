#include <iostream>
#include <string>
using namespace std;

int main() {
    string categoria, subcategoria, tipo;
    cin >> categoria;

    if (categoria == "vertebrado") {
        cin >> subcategoria;
        cin >> tipo;

        if (subcategoria == "ave") {
            if (tipo == "carnivoro") {
                cout << "aguia" << endl;
            } else if (tipo == "onivoro") {
                cout << "pomba" << endl;
            }
        } else if (subcategoria == "mamifero") {
            if (tipo == "onivoro") {
                cout << "homem" << endl;
            } else if (tipo == "herbivoro") {
                cout << "vaca" << endl;
            }
        }
    } else if (categoria == "invertebrado") {
        cin >> subcategoria;
        cin >> tipo;

        if (subcategoria == "inseto") {
            if (tipo == "hematofago") {
                cout << "pulga" << endl;
            } else if (tipo == "herbivoro") {
                cout << "lagarta" << endl;
            }
        } else if (subcategoria == "anelideo") {
            if (tipo == "hematofago") {
                cout << "sanguessuga" << endl;
            } else if (tipo == "onivoro") {
                cout << "minhoca" << endl;
            }
        }
    }

    return 0;
}
