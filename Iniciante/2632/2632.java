
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Variáveis
        int casosTeste = sc.nextInt();

        for (int i = 0; i < casosTeste; i++) {
            int width = sc.nextInt();
            int height = sc.nextInt();
            int x0 = sc.nextInt();
            int y0 = sc.nextInt();

            String tipoMagia = sc.next();
            int nivelMagia = sc.nextInt();
            int cx = sc.nextInt();
            int cy = sc.nextInt();

            int raioMagia = 0;
            int danoRecebido = 0;

            // Descobrindo dano e raio da magia
            if (tipoMagia.equals("fire")) {
                danoRecebido = 200;

                if (nivelMagia == 1)
                    raioMagia = 20;
                else if (nivelMagia == 2)
                    raioMagia = 30;
                else
                    raioMagia = 50;

            } else if (tipoMagia.equals("water")) {
                danoRecebido = 300;

                if (nivelMagia == 1)
                    raioMagia = 10;
                else if (nivelMagia == 2)
                    raioMagia = 25;
                else
                    raioMagia = 40;

            } else if (tipoMagia.equals("earth")) {
                danoRecebido = 400;

                if (nivelMagia == 1)
                    raioMagia = 25;
                else if (nivelMagia == 2)
                    raioMagia = 55;
                else
                    raioMagia = 70;

            } else if (tipoMagia.equals("air")) {
                danoRecebido = 100;

                if (nivelMagia == 1)
                    raioMagia = 18;
                else if (nivelMagia == 2)
                    raioMagia = 38;
                else
                    raioMagia = 60;
            }

            // Descobrindo o ponto do retângulo mais próximo do centro
            int pontoX;
            int pontoY;

            if (cx < x0)
                pontoX = x0;
            else if (cx > x0 + width)
                pontoX = x0 + width;
            else
                pontoX = cx;

            if (cy < y0)
                pontoY = y0;
            else if (cy > y0 + height)
                pontoY = y0 + height;
            else
                pontoY = cy;

            // Distância entre o centro da explosão e o ponto mais próximo
            int distanciaX = cx - pontoX;
            int distanciaY = cy - pontoY;

            int distanciaQuadrado =
                distanciaX * distanciaX + distanciaY * distanciaY;

            int raioQuadrado = raioMagia * raioMagia;

            // Verificando se o círculo intercepta o retângulo
            if (distanciaQuadrado <= raioQuadrado)
                System.out.println(danoRecebido);
            else
                System.out.println(0);
        }

        sc.close();
    }
}
