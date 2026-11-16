
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String S = sc.next();
        String T = sc.next();

        int custoTotal = 0;

        for (int i = 0; i < S.length(); i++) {
            int a = S.charAt(i) - 'a';
            int b = T.charAt(i) - 'a';

            int distancia = Math.abs(a - b);
            int custo = Math.min(distancia, 26 - distancia);

            custoTotal += custo;
        }

        System.out.println(custoTotal);

        sc.close();
    }
}
