import java.util.*;

public class Main {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        while (in.hasNext()) {

            String letras = in.next();

            int n = in.nextInt();

            for (int i = 0; i < n; i++) {

                int lampada = in.nextInt();

                System.out.print(letras.charAt(lampada - 1));
            }

            System.out.println();
        }

        in.close();
    }
}