import java.util.*;
import java.io.*;

public class Main {

    public static boolean ehBissexto(int ano) {
        return (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0);
    }

    public static int diasDoMes(int mes, int ano) {
        if (mes == 2) {
            return ehBissexto(ano) ? 29 : 28;
        }

        if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
            return 30;
        }

        return 31;
    }

    public static String calcularData(int dias) {
        int ano = 2020;
        int mes = 12;
        int dia = 21;

        while (dias > 0) {
            int diasNoMes = diasDoMes(mes, ano);
            int restantesNoMes = diasNoMes - dia;

            if (dias > restantesNoMes) {
                dias -= (restantesNoMes + 1);
                dia = 1;
                mes++;

                if (mes > 12) {
                    mes = 1;
                    ano++;
                }
            } else {
                dia += dias;
                dias = 0;
            }
        }

        return String.format("%04d-%02d-%02d", ano, mes, dia);
    }

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int numeroOrdinal = in.nextInt();

        // Júpiter
        double anosJupiter = numeroOrdinal * 11.9;

        int diasJupiter = (int) Math.rint(anosJupiter * 365);
        int bissextosJupiter = (int) (anosJupiter / 4);

        int diasTerrestresJ = diasJupiter + bissextosJupiter;

        // Saturno
        double anosSaturno = numeroOrdinal * 29.6;

        int diasSaturno = (int) Math.rint(anosSaturno * 365);
        int bissextosSaturno = (int) (anosSaturno / 4);

        int diasTerrestresS = diasSaturno + bissextosSaturno;

        System.out.println("Dias terrestres para Jupiter = " + diasTerrestresJ);
        System.out.println("Data terrestre para Jupiter: " + calcularData(diasTerrestresJ));

        System.out.println("Dias terrestres para Saturno = " + diasTerrestresS);
        System.out.println("Data terrestre para Saturno: " + calcularData(diasTerrestresS));
    }
}