/*
 * Beecrowd | 2159 - Número Aproximado de Primos
 * Categoria: Iniciante | Nível 1 | Assunto: Ad hoc, Biblioteca matemáti…
 * Link: https://judge.beecrowd.com/pt/problems/view/2159
 */

import java.io.*;

import java.util.*;



public class Main {



    public static void main(String[] args) throws IOException {



        Scanner in = new Scanner(System.in);



        double n = in.nextDouble();



        double P = n / Math.log(n);

        double M = 1.25506 * (n / Math.log(n));



        System.out.printf("%.1f %.1f%n", P, M);



        in.close();

    }

}