
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        double T = sc.nextDouble() + 0.0001;
        int N = sc.nextInt();

        int[] pesos = new int[N];

        for (int i = 0; i < N; i++) {
            pesos[i] = sc.nextInt();
        }

        // Possíveis pesos para o maior pedaço.
        ArrayList<Double> candidatos = new ArrayList<>();

        for (int peso : pesos) {
            for (int partes = 1; partes <= 500; partes++) {
                candidatos.add((double) peso / partes);
            }
        }

        // Testamos primeiro os maiores pesos possíveis.
        candidatos.sort(Collections.reverseOrder());

        for (double maior : candidatos) {
            int cortes = 0;
            boolean valido = true;

            for (int peso : pesos) {
                // Quantas partes são necessárias para não
                // ultrapassar o peso máximo considerado?
                int partes = (int) Math.ceil(
                    peso / maior - 1e-10
                );

                cortes += partes - 1;

                // A resposta garantidamente é menor que 500.
                if (cortes >= 500) {
                    valido = false;
                    break;
                }

                double menorParte = (double) peso / partes;

                // Todas as partes precisam respeitar a proporção.
                if (menorParte < T * maior - 1e-9) {
                    valido = false;
                    break;
                }
            }

            if (valido) {
                System.out.println(cortes);
                break;
            }
        }

        sc.close();
    }
}
