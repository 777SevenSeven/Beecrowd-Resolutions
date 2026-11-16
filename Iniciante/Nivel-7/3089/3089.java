/*
 * Beecrowd | 3089 - Presentes de Natal
 * Categoria: Iniciante | Nível 7 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/3089
 */



import java.util.Scanner;



public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);



        while (sc.hasNextInt()) {

            int n = sc.nextInt();



            if (n == 0) {

                break;

            }



            long[] presentes = new long[2 * n];



            for (int i = 0; i < 2 * n; i++) {

                presentes[i] = sc.nextLong();

            }



            long maior = 0;

            long menor = Long.MAX_VALUE;



            for (int i = 0; i < n; i++) {

                long soma = presentes[i] + presentes[2 * n - 1 - i];



                maior = Math.max(maior, soma);

                menor = Math.min(menor, soma);

            }



            System.out.println(maior + " " + menor);

        }



        sc.close();

    }

}

