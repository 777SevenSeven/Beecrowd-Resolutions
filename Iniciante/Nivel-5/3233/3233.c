/*
 * Beecrowd | 3233 - Suco
 * Categoria: Iniciante | Nível 5 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/3233
 */

#include <stdio.h>

#include <stdlib.h>



struct Casa {

    int pai;

    int demanda;

    int capacidade;

    int id;

};



// Função de comparação para ordenar pela demanda

int compara(const void *a, const void *b, void *casas) {

    struct Casa *c = (struct Casa *)casas;

    int ia = *(const int *)a;

    int ib = *(const int *)b;

    return c[ia].demanda - c[ib].demanda;

}



int main() {

    int n;

    if (scanf("%d", &n) != 1) return 0;



    struct Casa *casas = (struct Casa *) malloc((n + 1) * sizeof(struct Casa));

    for (int i = 1; i <= n; i++) {

        scanf("%d %d %d", &casas[i].pai, &casas[i].demanda, &casas[i].capacidade);

        casas[i].id = i;

    }



    int *ordem = (int *) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) ordem[i] = i + 1;



    // Ordena pela demanda usando qsort_r (se disponível) ou qsort com ponteiro global

    // Aqui usamos qsort com ponteiro global estático

    static struct Casa *casasGlobal;

    casasGlobal = casas;

    int comparaWrapper(const void *a, const void *b) {

        int ia = *(const int *)a;

        int ib = *(const int *)b;

        return casasGlobal[ia].demanda - casasGlobal[ib].demanda;

    }

    qsort(ordem, n, sizeof(int), comparaWrapper);



    int *usado = (int *) calloc(n + 1, sizeof(int));

    int resposta = 0;



    for (int i = 0; i < n; i++) {

        int id = ordem[i];

        int demanda = casas[id].demanda;

        int atual = id;

        int pode = 1;



        // Verifica caminho até o gerador

        while (atual != 0) {

            if (usado[atual] + demanda > casas[atual].capacidade) {

                pode = 0;

                break;

            }

            atual = casas[atual].pai;

        }



        if (pode) {

            atual = id;

            while (atual != 0) {

                usado[atual] += demanda;

                atual = casas[atual].pai;

            }

            resposta++;

        }

    }



    printf("%d\n", resposta);



    free(casas);

    free(ordem);

    free(usado);



    return 0;

}

