/*
 * Beecrowd | 1182 - Coluna na Matriz
 * Categoria: Iniciante | Nível 2 | Assunto: Matrizes
 * Link: https://judge.beecrowd.com/pt/problems/view/1182
 */



import java.util.Scanner;

import java.util.Locale;



public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        sc.useLocale(Locale.US);



        int C = sc.nextInt();

        char T = sc.next().charAt(0);



        double[][] M = new double[12][12];

        double soma = 0.0;



        for (int i = 0; i < 12; i++) {

            for (int j = 0; j < 12; j++) {

                M[i][j] = sc.nextDouble();



                if (j == C) {

                    soma += M[i][j];

                }

            }

        }



        if (T == 'M') {

            soma /= 12.0;

        }



        System.out.printf(Locale.US, "%.1f%n", soma);



        sc.close();

    }

}

