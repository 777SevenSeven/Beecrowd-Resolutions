
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int[][] mapa = new int[N + 1][N + 1];

        for (int i = 0; i <= N; i++) {
            for (int j = 0; j <= N; j++) {
                mapa[i][j] = sc.nextInt();
            }
        }

        StringBuilder out = new StringBuilder();

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                int cameras = mapa[i][j]
                            + mapa[i][j + 1]
                            + mapa[i + 1][j]
                            + mapa[i + 1][j + 1];

                if (cameras >= 2) {
                    out.append('S');
                } else {
                    out.append('U');
                }
            }
            out.append('\n');
        }

        System.out.print(out);
        sc.close();
    }
}
