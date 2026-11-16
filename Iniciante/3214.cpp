#include <iostream>
using namespace std;

int main() {
    int E, F, C;
    cin >> E >> F >> C;

    int garrafas = E + F;
    int total = 0;

    while (garrafas >= C) {
        int novos = garrafas / C;      // quantos refrigerantes ele consegue
        total += novos;                // soma ao total
        garrafas = novos + garrafas % C; // novas garrafas + sobra
    }

    cout << total << endl;
    return 0;
}
