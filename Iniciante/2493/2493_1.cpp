#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;

    while (cin >> T) {
        vector<int> x(T), y(T), z(T);

        for (int i = 0; i < T; i++) {
            char igual;

            cin >> x[i] >> y[i] >> igual >> z[i];
        }

        vector<string> errados;

        for (int i = 0; i < T; i++) {
            string nome;
            int E;
            char resposta;

            cin >> nome >> E >> resposta;

            int indice = E - 1;

            bool soma = (x[indice] + y[indice] == z[indice]);
            bool sub = (x[indice] - y[indice] == z[indice]);
            bool mult = (x[indice] * y[indice] == z[indice]);

            bool correta;

            if (resposta == '+')
                correta = soma;
            else if (resposta == '-')
                correta = sub;
            else if (resposta == '*')
                correta = mult;
            else
                correta = !soma && !sub && !mult;

            if (!correta)
                errados.push_back(nome);
        }

        if (errados.empty()) {
            cout << "You Shall All Pass!\n";
        }
        else if (errados.size() == T) {
            cout << "None Shall Pass!\n";
        }
        else {
            sort(errados.begin(), errados.end());

            for (int i = 0; i < (int)errados.size(); i++) {
                if (i > 0)
                    cout << ' ';

                cout << errados[i];
            }

            cout << '\n';
        }
    }

    return 0;
}