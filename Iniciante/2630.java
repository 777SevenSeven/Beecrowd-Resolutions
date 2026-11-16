
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int T = sc.nextInt();

        for (int t = 1; t <= T; t++) {
            String metodo = sc.next();
            int R = sc.nextInt();
            int G = sc.nextInt();
            int B = sc.nextInt();

            int P = 0;

            switch (metodo) {
                case "eye":
                    P = (int) (0.30 * R + 0.59 * G + 0.11 * B);
                    break;

                case "mean":
                    P = (R + G + B) / 3;
                    break;

                case "max":
                    P = Math.max(R, Math.max(G, B));
                    break;

                case "min":
                    P = Math.min(R, Math.min(G, B));
                    break;
            }

            System.out.println("Caso #" + t + ": " + P);
        }

        sc.close();
    }
}
