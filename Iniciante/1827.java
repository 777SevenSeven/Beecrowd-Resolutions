
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        StringBuilder out = new StringBuilder();

        while (sc.hasNextInt()) {
            int N = sc.nextInt();
            int inicio = N / 3;
            int fim = N - inicio - 1;
            int centro = N / 2;

            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    int valor = 0;

                    boolean interno =
                        i >= inicio && i <= fim &&
                        j >= inicio && j <= fim;

                    if (i == centro && j == centro) {
                        valor = 4;
                    } else if (interno) {
                        valor = 1;
                    } else if (i == j) {
                        valor = 2;
                    } else if (i + j == N - 1) {
                        valor = 3;
                    }

                    out.append(valor);
                }
                out.append('\n');
            }

            out.append('\n');
        }

        System.out.print(out);
        sc.close();
    }
}
