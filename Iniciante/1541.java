
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while (true) {
            int A = sc.nextInt();

            if (A == 0) {
                break;
            }

            int B = sc.nextInt();
            int C = sc.nextInt();

            double areaCasa = A * B;
            double areaTerreno = areaCasa * 100.0 / C;

            int lado = (int) Math.sqrt(areaTerreno);

            System.out.println(lado);
        }

        sc.close();
    }
}
