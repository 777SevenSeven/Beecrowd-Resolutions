/*
 * Beecrowd | 2950 - As Duas Torres
 * Categoria: Iniciante | Nível 1 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2950
 */



import java.util.Scanner;

import java.util.Locale;



public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);



        double N = sc.nextDouble();

        double X = sc.nextDouble();

        double Y = sc.nextDouble();



        double icm = N / (X + Y);



        System.out.printf(Locale.US, "%.2f%n", icm);



        sc.close();

    }

}

