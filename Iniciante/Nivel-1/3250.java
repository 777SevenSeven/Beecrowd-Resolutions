/*
 * Beecrowd | 3250 - Problema no Elevador
 * Categoria: Iniciante | Nível 1 | Assunto: BFS
 * Link: https://judge.beecrowd.com/pt/problems/view/3250
 */



import java.util.Scanner;

import java.util.Arrays;



public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);



        int f = sc.nextInt();

        int s = sc.nextInt();

        int g = sc.nextInt();

        int u = sc.nextInt();

        int d = sc.nextInt();



        int[] dist = new int[f + 1];

        Arrays.fill(dist, -1);



        int[] fila = new int[f + 1];

        int inicio = 0;

        int fim = 0;



        fila[fim++] = s;

        dist[s] = 0;



        while (inicio < fim) {

            int andar = fila[inicio++];



            if (andar == g) {

                System.out.println(dist[andar]);

                return;

            }



            int cima = andar + u;

            int baixo = andar - d;



            if (cima <= f && dist[cima] == -1) {

                dist[cima] = dist[andar] + 1;

                fila[fim++] = cima;

            }



            if (baixo >= 1 && dist[baixo] == -1) {

                dist[baixo] = dist[andar] + 1;

                fila[fim++] = baixo;

            }

        }



        System.out.println("use the stairs");

        sc.close();

    }

}

