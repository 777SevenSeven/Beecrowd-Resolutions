import java.io.IOException;
import java.util.Scanner;

/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner in = new Scanner(System.in);
        
        double A = in.nextDouble();
        double B = in.nextDouble();
        double C = in.nextDouble();
        
        A *= 2.0;
        B *= 3.0;
        C *= 5.0;
        
        System.out.printf("MEDIA = %.1f%n", (A + B + C) / 10.0);
 
    }
 
}