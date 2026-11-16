import java.io.IOException;
import java.util.*;
 
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {
 
    public static void main(String[] args) throws IOException {
        
        //Scanner
        Scanner in = new Scanner(System.in);
        
        //Variáveis
        int N = in.nextInt();
        
        in.close();
        
        int resultado = ( ( N + 1 ) * ( N + 2 ) ) / 2;
        
        //Saída de Dados
        System.out.println(resultado);
    }
 
}