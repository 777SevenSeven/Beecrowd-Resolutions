import java.util.*;
import java.io.*;

public class Main
{
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		int casosTeste = in.nextInt();
		
		for(int i = 0; i < casosTeste; i++) {
    		int hora = in.nextInt();
    		int minuto = in.nextInt();
    		int fechouOuNao = in.nextInt();
    		
    		if(fechouOuNao == 1) {
    		    System.out.printf("%02d:%02d - A porta abriu!%n", hora, minuto);
    		} else {
    		    System.out.printf("%02d:%02d - A porta fechou!%n", hora, minuto);
    		}
		}
		in.close();
	}
}
