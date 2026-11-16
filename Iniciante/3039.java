
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int carrinhos = 0;
        int bonecas = 0;

        for (int i = 0; i < N; i++) {
            String nome = sc.next();
            char sexo = sc.next().charAt(0);

            if (sexo == 'M') {
                carrinhos++;
            } else {
                bonecas++;
            }
        }

        System.out.println(carrinhos + " carrinhos");
        System.out.println(bonecas + " bonecas");

        sc.close();
    }
}
