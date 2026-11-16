
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();

        for (int i = 0; i < N; i++) {
            int joao = 0;
            int maria = 0;

            for (int j = 0; j < 3; j++) {
                int X = sc.nextInt();
                int D = sc.nextInt();
                joao += X * D;
            }

            for (int j = 0; j < 3; j++) {
                int X = sc.nextInt();
                int D = sc.nextInt();
                maria += X * D;
            }

            if (joao > maria) {
                System.out.println("JOAO");
            } else {
                System.out.println("MARIA");
            }
        }

        sc.close();
    }
}
