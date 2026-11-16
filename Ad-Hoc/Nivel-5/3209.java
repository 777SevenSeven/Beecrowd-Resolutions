/*
 * Beecrowd | 3209 - Tomadas Elétricas
 * Categoria: Ad-Hoc | Nível 5 | Assunto: Fórmula
 * Link: https://judge.beecrowd.com/pt/problems/view/3209
 */



import java.util.Scanner;



public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);



        int N = sc.nextInt();



        for (int t = 0; t < N; t++) {

            int K = sc.nextInt();

            int tomadas = 0;



            for (int i = 0; i < K; i++) {

                tomadas += sc.nextInt();

            }



            System.out.println(tomadas - K + 1);

        }



        sc.close();

    }

}

