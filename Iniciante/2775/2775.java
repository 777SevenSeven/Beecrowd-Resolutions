import java.util.*;

public class Main {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        while (in.hasNextInt()) {

            int n = in.nextInt();

            int[] pacote = new int[n];
            int[] tempo = new int[n];

            for (int i = 0; i < n; i++) {
                pacote[i] = in.nextInt();
            }

            for (int i = 0; i < n; i++) {
                tempo[i] = in.nextInt();
            }

            long total = 0;

            for (int i = 0; i < n - 1; i++) {

                for (int j = 0; j < n - 1 - i; j++) {

                    if (pacote[j] > pacote[j + 1]) {

                        total += tempo[j] + tempo[j + 1];

                        int aux = pacote[j];
                        pacote[j] = pacote[j + 1];
                        pacote[j + 1] = aux;

                        aux = tempo[j];
                        tempo[j] = tempo[j + 1];
                        tempo[j + 1] = aux;
                    }
                }
            }

            System.out.println(total);
        }

        in.close();
    }
}