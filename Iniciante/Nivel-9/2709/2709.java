/*
 * Beecrowd | 2709 - As Moedas de Robbie
 * Categoria: Iniciante | Nível 9
 * Link: https://judge.beecrowd.com/pt/problems/view/2709
 */



import java.util.Scanner;



public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);



        // Entrada de dados

        while (sc.hasNextInt()) {

            int M = sc.nextInt();



            int[] moedas = new int[20];



            for (int i = 0; i < M; i++) {

                moedas[i] = sc.nextInt();

            }



            int N = sc.nextInt();



            int soma = 0;



            // Desenvolvimento de dados

            for (int i = M - 1; i >= 0; i -= N) {

                soma += moedas[i];

            }



            // Verificação se é primo

            boolean primo = true;



            if (soma < 2) {

                primo = false;

            }



            for (int i = 2; i < soma; i++) {

                if (soma % i == 0) {

                    primo = false;

                    break;

                }

            }



            // Saída de dados

            if (primo) {

                System.out.println(

                    "You’re a coastal aircraft, Robbie, a large silver aircraft."

                );

            } else {

                System.out.println("Bad boy! I’ll hit you.");

            }

        }



        sc.close();

    }

}

