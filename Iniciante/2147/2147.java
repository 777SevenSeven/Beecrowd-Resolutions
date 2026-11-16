import java.util.*;

public class Main {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int casosTeste = in.nextInt();

        for (int i = 0; i < casosTeste; i++) {

            String palavra = in.next();

            double tempo = palavra.length() * 0.01;

            System.out.printf("%.2f%n", tempo);
        }

        in.close();
    }
}