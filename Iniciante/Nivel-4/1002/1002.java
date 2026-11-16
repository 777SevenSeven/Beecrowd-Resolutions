/*
 * Beecrowd | 1002 - Área do Círculo
 * Categoria: Iniciante | Nível 4 | Assunto: Sequencial
 * Link: https://judge.beecrowd.com/pt/problems/view/1002
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

 

        /**

         * Escreva a sua solução aqui

         * Code your solution here

         * Escriba su solución aquí

         */

         double area = 0, raio = 0;

         final double n = 3.14159;

         Scanner in = new Scanner(System.in);

         

         raio = in.nextDouble();

         area = n * Math.pow(raio, 2);

        

        System.out.printf("A=%.4f%n", area);

        

    }

 

}