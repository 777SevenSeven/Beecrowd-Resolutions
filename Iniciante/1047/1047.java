
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int horaInicial, minutoInicial, horaFinal, minutoFinal;
        int resultadoHoras, resultadoMinutos;

        // Entrada de dados
        horaInicial = sc.nextInt();
        minutoInicial = sc.nextInt();
        horaFinal = sc.nextInt();
        minutoFinal = sc.nextInt();

        // Cálculo das horas
        if (horaInicial < horaFinal ||
            (horaInicial == horaFinal && minutoInicial < minutoFinal)) {
            resultadoHoras = horaFinal - horaInicial;
        } else if (horaInicial > horaFinal) {
            resultadoHoras = 24 - horaInicial + horaFinal;
        } else {
            resultadoHoras = 24;
        }

        // Cálculo dos minutos
        if (minutoInicial <= minutoFinal) {
            resultadoMinutos = minutoFinal - minutoInicial;
        } else {
            resultadoHoras--; // Reduz uma hora
            resultadoMinutos = 60 + minutoFinal - minutoInicial;
        }

        // Saída de dados
        System.out.printf(
            "O JOGO DUROU %d HORA(S) E %d MINUTO(S)%n",
            resultadoHoras, resultadoMinutos
        );

        sc.close();
    }
}
