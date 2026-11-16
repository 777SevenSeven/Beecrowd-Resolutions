import java.util.*;

public class Main {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int n = in.nextInt();

        double resultado;

        if (n == 0) {
            resultado = 1.0;
        }
        else {

            double valor = 2.0;

            for (int i = 1; i < n; i++) {
                valor = 2.0 + (1.0 / valor);
            }

            resultado = 1.0 + (1.0 / valor);
        }

        System.out.printf("%.10f%n", resultado);

        in.close();
    }
}