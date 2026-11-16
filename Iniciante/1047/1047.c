#include <stdio.h>

int main() {
    int horaInicial, minutoInicial, horaFinal, minutoFinal;
    int resultadoHoras, resultadoMinutos;

    // Entrada de Dados
    scanf("%d %d %d %d", &horaInicial, &minutoInicial, &horaFinal, &minutoFinal);

    // Cálculo das Horas
    if (horaInicial < horaFinal || (horaInicial == horaFinal && minutoInicial < minutoFinal)) {
        resultadoHoras = horaFinal - horaInicial;
    } else if (horaInicial > horaFinal) {
        resultadoHoras = 24 - horaInicial + horaFinal;
    } else {
        resultadoHoras = 24;
    }

    // Cálculo dos Minutos
    if (minutoInicial <= minutoFinal) {
        resultadoMinutos = minutoFinal - minutoInicial;
    } else {
        resultadoHoras--; // Reduz uma hora
        resultadoMinutos = 60 + minutoFinal - minutoInicial;
    }

    // Saída de Dados
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", resultadoHoras, resultadoMinutos);

    return 0;
}
