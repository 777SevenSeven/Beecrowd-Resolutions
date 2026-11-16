
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int[][] naves = new int[n][3];

        for (int i = 0; i < n; i++) {
            naves[i][0] = sc.nextInt();
            naves[i][1] = sc.nextInt();
            naves[i][2] = sc.nextInt();
        }

        for (int i = 0; i < n; i++) {
            double menorDistancia = Double.MAX_VALUE;

            for (int j = 0; j < n; j++) {
                if (i == j) {
                    continue;
                }

                int dx = naves[i][0] - naves[j][0];
                int dy = naves[i][1] - naves[j][1];
                int dz = naves[i][2] - naves[j][2];

                double distancia = Math.sqrt(
                    dx * dx + dy * dy + dz * dz
                );

                if (distancia < menorDistancia) {
                    menorDistancia = distancia;
                }
            }

            if (menorDistancia <= 20) {
                System.out.println("A");
            } else if (menorDistancia <= 50) {
                System.out.println("M");
            } else {
                System.out.println("B");
            }
        }

        sc.close();
    }
}
