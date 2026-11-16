
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        StringBuilder out = new StringBuilder();

        while (sc.hasNextInt()) {
            int N = sc.nextInt();

            if (N == 0) {
                break;
            }

            int[][] matriz = new int[N][N];
            int maior = 1;

            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    matriz[i][j] = (int) Math.pow(2, i + j);

                    if (matriz[i][j] > maior) {
                        maior = matriz[i][j];
                    }
                }
            }

            int largura = String.valueOf(maior).length();

            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    if (j > 0) {
                        out.append(' ');
                    }

                    String valor = String.valueOf(matriz[i][j]);

                    for (int k = valor.length(); k < largura; k++) {
                        out.append(' ');
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
