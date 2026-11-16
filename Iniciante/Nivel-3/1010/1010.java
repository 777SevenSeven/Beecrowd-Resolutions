/*
 * Beecrowd | 1010 - Cálculo Simples
 * Categoria: Iniciante | Nível 3 | Assunto: Sequencial
 * Link: https://judge.beecrowd.com/pt/problems/view/1010
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

        

        int codigoRoupa = in.nextInt();

        int numeroRoupas = in.nextInt();

        float valorPecas = in.nextFloat();

        

        int codigoRoupa2 = in.nextInt();

        int numeroRoupas2 = in.nextInt();

        float valorPecas2 = in.nextFloat();

        

        float valorPagar = (numeroRoupas * valorPecas);

        float valorPagar2 = (numeroRoupas2 * valorPecas2);

        

        float valorTotalPagar = valorPagar + valorPagar2;

        

        System.out.printf("VALOR A PAGAR: R$ %.2f%n", valorTotalPagar);

        

    }

 

}