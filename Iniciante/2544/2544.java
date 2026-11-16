import java.util.*;

public class Main {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        while (in.hasNextInt()) {

            int n = in.nextInt();
            int contador = 0;

            while (n > 1) {
                n /= 2;
                contador++;
            }

            System.out.println(contador);
        }

        in.close();
    }
}