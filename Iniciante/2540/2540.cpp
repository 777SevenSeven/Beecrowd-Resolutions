#include <iostream>
using namespace std;

int main() {

    int N = 0;
    int voto = 0;

    while(cin >> N) {

        int votosAfavor = 0;

        for(int i = 0; i < N; i++) {

            cin >> voto;

            if(voto == 1) {
                votosAfavor++;
            }
        }

        if(votosAfavor * 3 >= N * 2) {
            cout << "impeachment" << endl;
        }
        else {
            cout << "acusacao arquivada" << endl;
        }
    }

    return 0;
}