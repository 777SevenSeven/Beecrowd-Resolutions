
import java.util.Scanner;

public class Main {

    static long mdc(long a, long b) {
        while (b != 0) {
            long resto = a % b;
            a = b;
            b = resto;
        }
        return a;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        long K = 1;

        for (int i = N + 1; i <= 2 * N; i++) {
            K = (K / mdc(K, i)) * i;
        }

        System.out.println(K);
        sc.close();
    }
}
