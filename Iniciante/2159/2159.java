import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws IOException {

        Scanner in = new Scanner(System.in);

        double n = in.nextDouble();

        double P = n / Math.log(n);
        double M = 1.25506 * (n / Math.log(n));

        System.out.printf("%.1f %.1f%n", P, M);

        in.close();
    }
}