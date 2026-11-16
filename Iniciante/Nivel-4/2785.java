/*
 * Beecrowd | 2785 - Pirâmide
 * Categoria: Iniciante | Nível 4 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2785
 */



import java.util.Scanner;



public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);



        int n = sc.nextInt();

        int[][] matriz = new int[n][n];



        for (int i = 0; i < n; i++) {

            for (int j = 0; j < n; j++) {

                matriz[i][j] = sc.nextInt();

            }

        }



        int[][] dp = new int[n][n];



        // Primeira linha da pirâmide: escolher uma caixa

        for (int j = 0; j < n; j++) {

            dp[0][j] = matriz[0][j];

        }



        // Construir as linhas seguintes da pirâmide

        for (int i = 1; i < n; i++) {

            for (int j = 0; j <= n - i - 1; j++) {



                int pesoLinha = 0;



                for (int k = j; k < j + i + 1; k++) {

                    pesoLinha += matriz[i][k];

                }



                dp[i][j] = pesoLinha

                        + Math.min(dp[i - 1][j],

                                   dp[i - 1][j + 1]);

            }

        }



        System.out.println(dp[n - 1][0]);



        sc.close();

    }

}

