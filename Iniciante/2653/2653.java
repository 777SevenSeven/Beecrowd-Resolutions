import java.util.*;

public class Main {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        HashSet<String> joias = new HashSet<>();

        while (in.hasNext()) {

            String joia = in.next();

            joias.add(joia);
        }

        System.out.println(joias.size());

        in.close();
    }
}