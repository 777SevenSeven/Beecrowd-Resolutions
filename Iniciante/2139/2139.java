import java.util.*;

public class Main {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int[] diasMes = {
            31, 29, 31, 30, 31, 30,
            31, 31, 30, 31, 30, 31
        };

        while (in.hasNextInt()) {

            int mes = in.nextInt();
            int dia = in.nextInt();

            int diaDoAno = dia;

            for (int i = 0; i < mes - 1; i++) {
                diaDoAno += diasMes[i];
            }

            if (diaDoAno == 360) {
                System.out.println("E natal!");
            }
            else if (diaDoAno == 359) {
                System.out.println("E vespera de natal!");
            }
            else if (diaDoAno > 360) {
                System.out.println("Ja passou!");
            }
            else {
                System.out.println(
                    "Faltam " + (360 - diaDoAno) + " dias para o natal!"
                );
            }
        }

        in.close();
    }
}