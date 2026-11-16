import java.util.*;

public class Main {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int n = in.nextInt();

        int totalSaques = 0;
        int totalBloqueios = 0;
        int totalAtaques = 0;

        int sucessosSaques = 0;
        int sucessosBloqueios = 0;
        int sucessosAtaques = 0;

        for (int i = 0; i < n; i++) {

            String nome = in.next();

            int saques = in.nextInt();
            int bloqueios = in.nextInt();
            int ataques = in.nextInt();

            int saquesSucesso = in.nextInt();
            int bloqueiosSucesso = in.nextInt();
            int ataquesSucesso = in.nextInt();

            totalSaques += saques;
            totalBloqueios += bloqueios;
            totalAtaques += ataques;

            sucessosSaques += saquesSucesso;
            sucessosBloqueios += bloqueiosSucesso;
            sucessosAtaques += ataquesSucesso;
        }

        double percentualSaques =
            (double) sucessosSaques / totalSaques * 100;

        double percentualBloqueios =
            (double) sucessosBloqueios / totalBloqueios * 100;

        double percentualAtaques =
            (double) sucessosAtaques / totalAtaques * 100;

        System.out.printf("Pontos de Saque: %.2f %%.%n", percentualSaques);
        System.out.printf("Pontos de Bloqueio: %.2f %%.%n", percentualBloqueios);
        System.out.printf("Pontos de Ataque: %.2f %%.%n", percentualAtaques);

        in.close();
    }
}