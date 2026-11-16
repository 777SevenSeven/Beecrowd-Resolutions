
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();

        long[] carneiros = new long[N];
        boolean[] visitada = new boolean[N];

        long total = 0;

        for (int i = 0; i < N; i++) {
            carneiros[i] = sc.nextLong();
            total += carneiros[i];
        }

        int pos = 0;
        long atacadas = 0;

        while (pos >= 0 && pos < N) {
            // Conta a estrela somente na primeira visita
            if (!visitada[pos]) {
                visitada[pos] = true;
                atacadas++;
            }

            // Guarda a quantidade antes do roubo
            long antes = carneiros[pos];

            // Rouba um carneiro, se houver
            if (carneiros[pos] > 0) {
                carneiros[pos]--;
                total--;
            }

            // A direção depende da quantidade antes do roubo
            if (antes % 2 == 1)
                pos++;
            else
                pos--;
        }

        System.out.println(atacadas + " " + total);

        sc.close();
    }
}
