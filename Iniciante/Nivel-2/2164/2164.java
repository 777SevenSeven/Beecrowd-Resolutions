/*
 * Beecrowd | 2164 - Fibonacci Rápido
 * Categoria: Iniciante | Nível 2 | Assunto: Ad hoc, biblioteca matemáti…
 * Link: https://judge.beecrowd.com/pt/problems/view/2164
 */

import java.util.*;



public class Main {



    public static void main(String[] args) {



        Scanner in = new Scanner(System.in);



        int n = in.nextInt();



        double raiz5 = Math.sqrt(5.0);



        double phi = (1.0 + raiz5) / 2.0;

        double psi = (1.0 - raiz5) / 2.0;



        double fibonacci =

            (Math.pow(phi, n) - Math.pow(psi, n)) / raiz5;



        System.out.printf("%.1f%n", fibonacci);



        in.close();

    }

}