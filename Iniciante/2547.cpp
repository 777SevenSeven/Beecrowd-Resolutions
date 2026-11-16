#include <iostream>
using namespace std;

int main()
{
    int visitantesPodem;
    int numeroVisitantes;
    int alturaMinima;
    int alturaMaxima;
    int visitante;

    while(cin >> numeroVisitantes >> alturaMinima >> alturaMaxima) {

        visitantesPodem = 0;

        for(int i = 0; i < numeroVisitantes; i++) {

            cin >> visitante;

            if(visitante >= alturaMinima && visitante <= alturaMaxima) {
                visitantesPodem++;
            }
        }

        cout << visitantesPodem << endl;
    }

    return 0;
}