/*
 * Beecrowd | 2163 - O Despertar da Força
 * Categoria: Iniciante | Nível 4 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2163
 */

import java.util.Scanner;



public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);



        int n = sc.nextInt();

        int m = sc.nextInt();



        int[][] matriz = new int[n][m];



        for (int i = 0; i < n; i++) {

            for (int j = 0; j < m; j++) {

                matriz[i][j] = sc.nextInt();

            }

        }



        int x = 0;

        int y = 0;



        for (int i = 1; i < n - 1; i++) {

            for (int j = 1; j < m - 1; j++) {



                if (matriz[i][j] == 42 &&

                    matriz[i - 1][j - 1] == 7 &&

                    matriz[i - 1][j] == 7 &&

                    matriz[i - 1][j + 1] == 7 &&

                    matriz[i][j - 1] == 7 &&

                    matriz[i][j + 1] == 7 &&

                    matriz[i + 1][j - 1] == 7 &&

                    matriz[i + 1][j] == 7 &&

                    matriz[i + 1][j + 1] == 7) {



                    x = i + 1;

                    y = j + 1;

                    break;

                }

            }



            if (x != 0) {

                break;

            }

        }



        System.out.println(x + " " + y);



        sc.close();

    }

}

