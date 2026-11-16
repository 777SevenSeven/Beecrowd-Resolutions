import java.util.*;

public class Main {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int L = in.nextInt();
        int C = in.nextInt();

        int tipo1 = 2 * L * C - L - C + 1;
        int tipo2 = 2 * (L + C - 2);

        System.out.println(tipo1);
        System.out.println(tipo2);

        in.close();
    }
}