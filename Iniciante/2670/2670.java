import java.util.*;

public class Main {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int A1 = in.nextInt();
        int A2 = in.nextInt();
        int A3 = in.nextInt();

        int andar1 = A2 * 2 + A3 * 4;
        int andar2 = A1 * 2 + A3 * 2;
        int andar3 = A1 * 4 + A2 * 2;

        int menor = Math.min(andar1, Math.min(andar2, andar3));

        System.out.println(menor);

        in.close();
    }
}