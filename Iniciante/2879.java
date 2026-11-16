
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int vitorias = 0;

        for (int i = 0; i < N; i++) {
            int porta = sc.nextInt();

            if (porta != 1) {
                vitorias++;
            }
        }

        System.out.println(vitorias);
        sc.close();
    }
}
