import java.util.*;

public class Main {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        while (in.hasNextInt()) {

            int n = in.nextInt();
            int id = in.nextInt();

            int contador = 0;

            for (int i = 0; i < n; i++) {

                int autor = in.nextInt();
                int jogo = in.nextInt();

                if (autor == id && jogo == 0) {
                    contador++;
                }
            }

            System.out.println(contador);
        }

        in.close();
    }
}