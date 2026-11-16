/*
 * Beecrowd | 2760 - Entrada e Saída de String
 * Categoria: Iniciante | Nível 5 | Assunto: String
 * Link: https://judge.beecrowd.com/pt/problems/view/2760
 */

#include <stdio.h>

#include <string.h>



int main() {

    char frase1[101], frase2[101], frase3[101];



    // Entrada de Dados

    fgets(frase1, sizeof(frase1), stdin);

    fgets(frase2, sizeof(frase2), stdin);

    fgets(frase3, sizeof(frase3), stdin);



    // Remover o '\n' do final de cada string, se existir

    size_t len;

    len = strlen(frase1);

    if (len > 0 && frase1[len - 1] == '\n') frase1[len - 1] = '\0';

    len = strlen(frase2);

    if (len > 0 && frase2[len - 1] == '\n') frase2[len - 1] = '\0';

    len = strlen(frase3);

    if (len > 0 && frase3[len - 1] == '\n') frase3[len - 1] = '\0';



    // Saída de Dados

    // Primeira Linha

    printf("%s%s%s\n", frase1, frase2, frase3);



    // Segunda Linha

    printf("%s%s%s\n", frase2, frase3, frase1);



    // Terceira Linha

    printf("%s%s%s\n", frase3, frase1, frase2);



    // Quarta Linha (somente 10 caracteres de cada)

    printf("%.10s%.10s%.10s\n", frase1, frase2, frase3);



    return 0;

}

