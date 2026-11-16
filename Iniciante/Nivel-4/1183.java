/*
 * Beecrowd | 1183 - Acima da Diagonal Principal
 * Categoria: Iniciante | Nível 4 | Assunto: Matrizes
 * Link: https://judge.beecrowd.com/pt/problems/view/1183
 */



import java.util.Scanner;

import java.util.Locale;



public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        sc.useLocale(Locale.US);



        char operacao = sc.next().charAt(0);



        double soma = 0.0;

        int quantidade = 0;



        for (int i = 0; i < 12; i++) {

            for (int j = 0; j < 12; j++) {

                double valor = sc.nextDouble();



                if (j > i) {

                    soma += valor;

                    quantidade++;

                }

            }

        }



        if (operacao == 'M') {

            soma /= quantidade;

        }



        System.out.printf(Locale.US, "%.1f%n", soma);



        sc.close();

    }

}