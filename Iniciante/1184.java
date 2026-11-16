
import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        sc.useLocale(Locale.US);

        char O = sc.next().charAt(0);
        double[][] M = new double[12][12];
        double soma = 0.0;
        int quantidade = 0;

        for (int i = 0; i < 12; i++) {
            for (int j = 0; j < 12; j++) {
                M[i][j] = sc.nextDouble();

                if (i > j) {
                    soma += M[i][j];
                    quantidade++;
                }
            }
        }

        if (O == 'M') {
            soma /= quantidade;
        }

        System.out.printf(Locale.US, "%.1f%n", soma);

        sc.close();
    }
}
