import java.util.*;

public class Main {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        while (in.hasNextInt()) {

            int M = in.nextInt();

            if (M == 360 || M < 90) {
                System.out.println("Bom Dia!!");
            }
            else if (M < 180) {
                System.out.println("Boa Tarde!!");
            }
            else if (M < 270) {
                System.out.println("Boa Noite!!");
            }
            else {
                System.out.println("De Madrugada!!");
            }
        }

        in.close();
    }
}