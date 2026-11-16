#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        char nome[101];
        double dificuldade;

        scanf("%s", nome);
        scanf("%lf", &dificuldade);

        double soma = 0;
        double maior = 0;
        double menor = 10;

        for (int j = 0; j < 7; j++) {

            double nota;
            scanf("%lf", &nota);

            soma += nota;

            if (nota > maior) {
                maior = nota;
            }

            if (nota < menor) {
                menor = nota;
            }
        }

        double resultado = (soma - maior - menor) * dificuldade;

        printf("%s %.2f\n", nome, resultado);
    }

    return 0;
}