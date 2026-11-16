
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while (sc.hasNextInt()) {
            int N = sc.nextInt();
            int M = sc.nextInt();

            int[][] tabuleiro = new int[N][M];

            for (int i = 0; i < N; i++) {
                for (int j = 0; j < M; j++) {
                    tabuleiro[i][j] = sc.nextInt();
                }
            }

            for (int i = 0; i < N; i++) {
                for (int j = 0; j < M; j++) {
                    if (tabuleiro[i][j] == 1) {
                        System.out.print(9);
                    } else {
                        int vizinhos = 0;

                        if (i > 0 && tabuleiro[i - 1][j] == 1) {
                            vizinhos++;
                        }

                        if (i < N - 1 && tabuleiro[i + 1][j] == 1) {
                            vizinhos++;
                        }

                        if (j > 0 && tabuleiro[i][j - 1] == 1) {
                            vizinhos++;
                        }

                        if (j < M - 1 && tabuleiro[i][j + 1] == 1) {
                            vizinhos++;
                        }

                        System.out.print(vizinhos);
                    }
                }

                System.out.println();
            }
        }

        sc.close();
    }
}
