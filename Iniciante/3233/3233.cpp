#include <bits/stdc++.h>
using namespace std;

struct Casa {
    int pai;
    int demanda;
    int capacidade;
    int id;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<Casa> casas(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> casas[i].pai
            >> casas[i].demanda
            >> casas[i].capacidade;

        casas[i].id = i;
    }

    // Processar as menores demandas primeiro
    vector<int> ordem(n);

    for (int i = 0; i < n; i++) {
        ordem[i] = i + 1;
    }

    sort(ordem.begin(), ordem.end(), [&](int a, int b) {
        return casas[a].demanda < casas[b].demanda;
    });

    // usado[i] = quanto já está passando
    // pelo cabo entre i e seu pai
    vector<int> usado(n + 1, 0);

    int resposta = 0;

    for (int id : ordem) {
        int demanda = casas[id].demanda;

        bool pode = true;

        // Primeiro: verifica todo o caminho até o gerador
        int atual = id;

        while (atual != 0) {
            if (usado[atual] + demanda > casas[atual].capacidade) {
                pode = false;
                break;
            }

            atual = casas[atual].pai;
        }

        // Se couber em todos os cabos, atende a casa
        if (pode) {
            atual = id;

            while (atual != 0) {
                usado[atual] += demanda;
                atual = casas[atual].pai;
            }

            resposta++;
        }
    }

    cout << resposta << '\n';

    return 0;
}