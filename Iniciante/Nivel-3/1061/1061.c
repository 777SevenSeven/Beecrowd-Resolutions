/*
 * Beecrowd | 1061 - Tempo de um Evento
 * Categoria: Iniciante | Nível 3 | Assunto: Seleção
 * Link: https://judge.beecrowd.com/pt/problems/view/1061
 */

#include <stdio.h>



int main() {

    char string[10]; //Para os textos aleatórios "Dia" e os ":"

    int diaPassados, horasPassadas, minutosPassados, segundosPassados;

    int diaAtual, horaAtual, minutoAtual, segundoAtual;

    int diaFuturo, horaFutura, minutoFuturo, segundoFuturo;

    

    // Variáveis para o calculo total

    long long totalSegundosInicio, totalSegundosFim, diferencaTotal;



    // --- Entrada de Dados ---

    // Lê: "Dia" diaAtual

    scanf("%s %d", string, &diaAtual);

    // Lê: hora : minuto : segundo

    scanf("%d %s %d %s %d", &horaAtual, string, &minutoAtual, string, &segundoAtual);

    

    // Lê: "Dia" diaFuturo

    scanf("%s %d", string, &diaFuturo);

    // Lê: hora : minuto : segundo

    scanf("%d %s %d %s %d", &horaFutura, string, &minutoFuturo, string, &segundoFuturo);

    

    // --- Desenvolvimento (Converter tudo para segundos) ---

    // 1 dia = 86400 segundos (24 * 60 * 60)

    // 1 hora = 3600 segundos (60 * 60)

    // 1 minuto = 60 segundos

    

    totalSegundosInicio = (diaAtual * 86400) + (horaAtual * 3600) + (minutoAtual * 60) + segundoAtual;

    totalSegundosFim = (diaFuturo * 86400) + (horaFutura * 3600) + (minutoFuturo * 60) + segundoFuturo;

    

    // Calcula a diferença total em segundos

    diferencaTotal = totalSegundosFim - totalSegundosInicio;

    

    // --- Converter de volta para Dia/Hora/Min/Seg ---

    

    diaPassados = diferencaTotal / 86400;

    diferencaTotal = diferencaTotal % 86400; // O que sobrou dos dias

    

    horasPassadas = diferencaTotal / 3600;

    diferencaTotal = diferencaTotal % 3600; // O que sobrou das horas

    

    minutosPassados = diferencaTotal / 60;

    segundosPassados = diferencaTotal % 60; // O que sobrou é o resto final, ou seja, os segundos



    // --- Saída de Dados ---

    printf("%d dia(s)\n", diaPassados);

    printf("%d hora(s)\n", horasPassadas);

    printf("%d minuto(s)\n", minutosPassados);

    printf("%d segundo(s)\n", segundosPassados);



    return 0;

}