
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Entrada de dados
        int a = sc.nextInt();
        int b = sc.nextInt();

        // Cálculo do quociente e do resto
        int q = a / b;
        int r = a % b;

        // Ajuste para garantir resto não negativo
        if (r < 0) {
            if (b > 0) {
                q -= 1;
                r += b;
            } else {
                q += 1;
                r -= b;
            }
        }

        // Saída de dados
        System.out.println(q + " " + r);

        sc.close();
    }
}
