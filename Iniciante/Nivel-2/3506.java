/*
 * Beecrowd | 3506 - Quantos primos?
 * Categoria: Iniciante | Nível 2 | Assunto: Matemática
 * Link: https://judge.beecrowd.com/pt/problems/view/3506
 */



import java.io.*;

import java.util.*;



public class Main {

    public static void main(String[] args) throws IOException {

        final int MAX = 10_000_000;



        boolean[] composto = new boolean[MAX + 1];

        int[] prefixo = new int[MAX + 1];



        // Crivo de Eratóstenes

        composto[0] = true;

        composto[1] = true;



        for (int i = 2; i * i <= MAX; i++) {

            if (!composto[i]) {

                for (int j = i * i; j <= MAX; j += i) {

                    composto[j] = true;

                }

            }

        }



        // Conta os primos acumuladamente

        for (int i = 1; i <= MAX; i++) {

            prefixo[i] = prefixo[i - 1];



            if (!composto[i]) {

                prefixo[i]++;

            }

        }



        BufferedReader br = new BufferedReader(

            new InputStreamReader(System.in)

        );



        int N = Integer.parseInt(br.readLine().trim());

        StringBuilder saida = new StringBuilder();



        for (int i = 0; i < N; i++) {

            StringTokenizer st = new StringTokenizer(br.readLine());



            int A = Integer.parseInt(st.nextToken());

            int B = Integer.parseInt(st.nextToken());



            int resposta = prefixo[B] - prefixo[A - 1];



            saida.append(resposta).append('\n');

        }



        System.out.print(saida);

    }

}

