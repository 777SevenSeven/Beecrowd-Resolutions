/*
 * Beecrowd | 1015 - Distância Entre Dois Pontos
 * Categoria: Iniciante | Nível 1 | Assunto: Sequencial
 * Link: https://judge.beecrowd.com/pt/problems/view/1015
 */

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

        

        float X1 = in.nextFloat();

        float Y1 = in.nextFloat();

        float X2 = in.nextFloat();

        float Y2 = in.nextFloat();

        

        float distancia = (float) (Math.sqrt(Math.pow( (X2 - X1), 2) + Math.pow( (Y2 - Y1), 2) ));

        

        System.out.printf("%.4f%n", distancia);

    }

 

}