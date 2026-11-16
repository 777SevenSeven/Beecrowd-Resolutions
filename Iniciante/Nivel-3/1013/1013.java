/*
 * Beecrowd | 1013 - O Maior
 * Categoria: Iniciante | Nível 3 | Assunto: Sequencial
 * Link: https://judge.beecrowd.com/pt/problems/view/1013
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

        

        int A = in.nextInt();

        int B = in.nextInt();

        int C = in.nextInt();

        

        int maiorAB = ( ( A + B + Math.abs(A - B) ) / 2 );

        

        if(maiorAB > C) {

            System.out.println(maiorAB + " eh o maior");

        } else {

            System.out.println(C + " eh o maior");

        }

    }

 

}