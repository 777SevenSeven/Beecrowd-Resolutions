
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        StringBuilder out = new StringBuilder();

        while (sc.hasNextInt()) {
            int N = sc.nextInt();

            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    if (j == N - 1 - i) {
                        out.append('2');
                    } else if (j == i) {
                        out.append('1');
                    } else {
                        out.append('3');
                    }
                }
                out.append('\n');
            }
        }

        System.out.print(out);
        sc.close();
    }
}
