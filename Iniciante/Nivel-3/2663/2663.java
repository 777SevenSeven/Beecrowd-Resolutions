/*
 * Beecrowd | 2663 - Fase
 * Categoria: Iniciante | Nível 3
 * Link: https://judge.beecrowd.com/pt/problems/view/2663
 */

import java.util.*;



public class Main {



    public static void main(String[] args) {



        Scanner in = new Scanner(System.in);



        int n = in.nextInt();

        int k = in.nextInt();



        int[] notas = new int[n];



        for (int i = 0; i < n; i++) {

            notas[i] = in.nextInt();

        }



        Arrays.sort(notas);



        // A nota de corte é a K-ésima maior nota

        int notaCorte = notas[n - k];



        int classificados = 0;



        for (int i = 0; i < n; i++) {



            if (notas[i] >= notaCorte) {

                classificados++;

            }

        }



        System.out.println(classificados);



        in.close();

    }

}