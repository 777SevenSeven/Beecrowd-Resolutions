
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int turistas = 0;
        int jipes = 0;

        while (sc.hasNext()) {
            String movimento = sc.next();

            if (movimento.equals("ABEND")) {
                break;
            }

            int T = sc.nextInt();

            if (movimento.equals("SALIDA")) {
                turistas += T;
                jipes++;
            } else if (movimento.equals("VUELTA")) {
                turistas -= T;
                jipes--;
            }
        }

        System.out.println(turistas);
        System.out.println(jipes);

        sc.close();
    }
}
