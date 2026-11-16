import java.util.*;

public class Main {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        while (in.hasNextInt()) {

            int n = in.nextInt();

            int tempoAnterior = 0;
            int distanciaAnterior = 0;

            for (int i = 1; i <= n; i++) {

                int tempo = in.nextInt();
                int distancia = in.nextInt();

                if (i == 1) {
                    System.out.println(i);

                    tempoAnterior = tempo;
                    distanciaAnterior = distancia;
                }
                else if (distancia * tempoAnterior > distanciaAnterior * tempo) {

                    System.out.println(i);

                    tempoAnterior = tempo;
                    distanciaAnterior = distancia;
                }
            }
        }

        in.close();
    }
}