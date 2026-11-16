
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int brancas = (n * n + 1) / 2;
        int pretas = (n * n) / 2;

        System.out.println(brancas + " casas brancas e " + pretas + " casas pretas");

        sc.close();
    }
}
