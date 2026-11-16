#include <stdio.h>
#include <stdint.h>    // Para int32_t
#include <inttypes.h>  // Para SCNd32, PRId32

int main(void) {
    int32_t R1 = 0, R2 = 0, resultado = 0;
    int32_t casosTestes = 0;

    // Lê o número de casos de teste
    if (scanf("%" SCNd32, &casosTestes) != 1 || casosTestes < 0) {
        printf("Entrada inválida!\n");
        return 1;
    }

    for (int32_t i = 0; i < casosTestes; i++) {
        // Lê os dois raios
        if (scanf("%" SCNd32 " %" SCNd32, &R1, &R2) != 2 || R1 <= 0 || R2 <= 0) {
            printf("Entrada inválida!\n");
            return 1;
        }

        // O menor raio do conduite é a soma dos dois raios
        resultado = R1 + R2;

        // Imprime o resultado
        printf("%" PRId32 "\n", resultado);
    }

    return 0;
}
