import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while (sc.hasNextInt()) {
            int n = sc.nextInt();

            int m = sc.nextInt();
            int l = sc.nextInt();

            int[][] marcos = new int[m][n];
            int[][] leonardo = new int[l][n];

            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    marcos[i][j] = sc.nextInt();
                }
            }

            for (int i = 0; i < l; i++) {
                for (int j = 0; j < n; j++) {
                    leonardo[i][j] = sc.nextInt();
                }
            }

            int cm = sc.nextInt();
            int cl = sc.nextInt();
            int a = sc.nextInt();

            int atributoMarcos = marcos[cm - 1][a - 1];
            int atributoLeonardo = leonardo[cl - 1][a - 1];

            if (atributoMarcos > atributoLeonardo) {
                System.out.println("Marcos");
            } else if (atributoLeonardo > atributoMarcos) {
                System.out.println("Leonardo");
            } else {
                System.out.println("Empate");
            }
        }

        sc.close();
    }
}