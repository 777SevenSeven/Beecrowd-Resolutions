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
 
        Scanner in = new Scanner(System.in);
        
        //Variáveis e Entrada
        int casosTeste = in.nextInt();
        
        for(int i = 0; i < casosTeste; i++) {
            int altura = in.nextInt();
            int diametro = in.nextInt();
            int galhos = in.nextInt();
            
            boolean tem = true;
            
            //Testes
            if (altura >= 200 && altura <= 300 &&
                diametro >= 50 &&
                galhos >= 150) {
                System.out.println("Sim");
            } else {
                System.out.println("Nao");
            }
        }

        in.close();
    }
}