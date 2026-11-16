#include <stdio.h>
#include <string.h>

int main() {
    int N;

    while (scanf("%d", &N) != EOF) {
        getchar(); // consome o \n após o número

        while (N--) {
            char codigo[100];
            fgets(codigo, sizeof(codigo), stdin);
            codigo[strcspn(codigo, "\n")] = '\0'; // remove \n

            int quantidadeGrupos = 0;
            int pontos = 0;

            // separa por espaços
            char *grupo = strtok(codigo, " ");
            while (grupo != NULL) {
                quantidadeGrupos++;
                if (quantidadeGrupos == 1) {
                    pontos = strlen(grupo);
                }
                grupo = strtok(NULL, " ");
            }

            int posicao = (quantidadeGrupos - 1) * 3 + pontos;
            printf("%c\n", 'a' + posicao - 1);
        }
    }

    return 0;
}
