/*
 * Beecrowd | 3343 - Attack On Gasparini
 * Categoria: Iniciante | Nível 8 | Assunto: Ad-Hoc
 * Link: https://judge.beecrowd.com/pt/problems/view/3343
 */



import java.util.Scanner;



public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);



        // Entrada de dados

        int n = sc.nextInt();

        int x = sc.nextInt();



        String ataque = sc.next();



        int p = sc.nextInt();

        int m = sc.nextInt();

        int g = sc.nextInt();



        // Inicializa as muralhas com resistência x

        int[] walls = new int[n];



        for (int i = 0; i < n; i++) {

            walls[i] = x;

        }



        int posP = 0;

        int posM = 0;

        int posG = 0;



        for (int i = 0; i < ataque.length(); i++) {

            char titan = ataque.charAt(i);



            if (titan == 'P') {

                while (walls[posP] < p) {

                    posP++;

                }



                walls[posP] -= p;



            } else if (titan == 'M') {

                while (walls[posM] < m) {

                    posM++;

                }



                walls[posM] -= m;



            } else { // G

                while (walls[posG] < g) {

                    posG++;

                }



                walls[posG] -= g;

            }

        }



        // Descobre qual foi a última muralha utilizada

        int resposta = Math.max(posP, Math.max(posM, posG)) + 1;



        // Saída de dados

        System.out.println(resposta);



        sc.close();

    }

}

