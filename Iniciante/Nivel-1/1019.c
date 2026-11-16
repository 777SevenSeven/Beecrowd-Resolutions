/*
 * Beecrowd | 1019 - Conversão de Tempo
 * Categoria: Iniciante | Nível 1 | Assunto: Sequencial
 * Link: https://judge.beecrowd.com/pt/problems/view/1019
 */

#include <stdio.h>



int main () {

    int horas = 0, minutos = 0, segundos = 0;

    

    //Entrada de Dados

    scanf("%d", &segundos);

    

    //Processamento de Dados

    minutos = segundos / 60;

    segundos%= 60;

    horas = minutos / 60;

    minutos %= 60;

    

    //Saída de Dados

    printf("%d:%d:%d\n", horas, minutos, segundos);

return 0;

}