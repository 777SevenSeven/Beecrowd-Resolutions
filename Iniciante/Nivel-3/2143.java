/*
 * Beecrowd | 2143 - A Volta do Radar
 * Categoria: Iniciante | Nível 3 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2143
 */



import java.util.Scanner;



public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);



        while (true) {

            int T = sc.nextInt();



            if (T == 0) {

                break;

            }



            for (int i = 0; i < T; i++) {

                int N = sc.nextInt();



                if (N % 2 == 0) {

                    System.out.println(2 * N - 2);

                } else {

                    System.out.println(2 * N - 1);

                }

            }

        }



        sc.close();

    }

}

