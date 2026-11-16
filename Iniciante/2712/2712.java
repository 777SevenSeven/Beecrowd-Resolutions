import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws IOException {

        Scanner in = new Scanner(System.in);

        int casosTeste = in.nextInt();

        for (int i = 0; i < casosTeste; i++) {

            String placa = in.next();

            boolean valida = true;

            // A placa precisa ter exatamente 8 caracteres
            if (placa.length() != 8) {
                valida = false;
            }

            // O hífen precisa estar na posição 3
            if (valida && placa.charAt(3) != '-') {
                valida = false;
            }

            // Posições 0, 1 e 2 precisam ser letras maiúsculas
            if (valida) {
                for (int j = 0; j < 3; j++) {
                    char caractere = placa.charAt(j);

                    if (caractere < 'A' || caractere > 'Z') {
                        valida = false;
                    }
                }
            }

            // Posições 4, 5, 6 e 7 precisam ser números
            if (valida) {
                for (int j = 4; j < 8; j++) {
                    char caractere = placa.charAt(j);

                    if (caractere < '0' || caractere > '9') {
                        valida = false;
                    }
                }
            }

            // Se a placa for inválida
            if (!valida) {
                System.out.println("FAILURE");
                continue;
            }

            // Se chegou aqui, a placa é válida.
            // Agora podemos olhar o último dígito.
            char ultimo = placa.charAt(placa.length() - 1);

            if (ultimo == '1' || ultimo == '2') {
                System.out.println("MONDAY");
            }
            else if (ultimo == '3' || ultimo == '4') {
                System.out.println("TUESDAY");
            }
            else if (ultimo == '5' || ultimo == '6') {
                System.out.println("WEDNESDAY");
            }
            else if (ultimo == '7' || ultimo == '8') {
                System.out.println("THURSDAY");
            }
            else if (ultimo == '9' || ultimo == '0') {
                System.out.println("FRIDAY");
            }
        }

        in.close();
    }
}