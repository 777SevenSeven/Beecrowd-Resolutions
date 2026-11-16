/*
 * Beecrowd | 1008 - Salário
 * Categoria: Iniciante | Nível 2 | Assunto: Sequencial
 * Link: https://judge.beecrowd.com/pt/problems/view/1008
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

        

        int numero = in.nextInt();

        int quantidadeHora = in.nextInt();

        float salarioHora = in.nextFloat();

        

        System.out.printf("NUMBER = %d%n", numero);

        System.out.printf("SALARY = U$ %.2f%n", salarioHora * quantidadeHora);

    }

 

}