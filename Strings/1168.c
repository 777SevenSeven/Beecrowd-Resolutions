#include <stdio.h>
#include <string.h>

int main() {
    int casoTeste = 0;
    scanf("%d", &casoTeste);

    while (casoTeste--) {
        char string[101]; 
        int led = 0;

        // Entrada de Dados
        scanf("%s", string);

        // Processamento de Dados
        int tamanho = strlen(string);
        for (int j = 0; j < tamanho; j++) {
            char digit = string[j];
            switch (digit) {
                case '0': led += 6; break;
                case '1': led += 2; break;
                case '2': led += 5; break;
                case '3': led += 5; break;
                case '4': led += 4; break;
                case '5': led += 5; break;
                case '6': led += 6; break;
                case '7': led += 3; break;
                case '8': led += 7; break;
                case '9': led += 6; break;
            }
        }

        // Saída dos Dados
        printf("%d leds\n", led);
    }

    return 0;
}
