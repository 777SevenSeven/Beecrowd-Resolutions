import java.util.*;

public class Main {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        while (in.hasNextInt()) {

            int n = in.nextInt();
            int q = in.nextInt();

            Integer[] notas = new Integer[n];

            for (int i = 0; i < n; i++) {
                notas[i] = in.nextInt();
            }

            Arrays.sort(notas, Collections.reverseOrder());

            for (int i = 0; i < q; i++) {

                int posicao = in.nextInt();

                System.out.println(notas[posicao - 1]);
            }
        }

        in.close();
    }
}