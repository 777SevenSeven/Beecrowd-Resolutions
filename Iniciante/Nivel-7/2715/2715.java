/*
 * Beecrowd | 2715 - Dividindo os Trabalhos I
 * Categoria: Iniciante | Nível 7
 * Link: https://judge.beecrowd.com/pt/problems/view/2715
 */



import java.util.Scanner;



public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);



        while (sc.hasNextInt()) {

            int N = sc.nextInt();



            long[] a = new long[N];

            long total = 0;



            for (int i = 0; i < N; i++) {

                a[i] = sc.nextLong();

                total += a[i];

            }



            long somaRangel = 0;

            long melhor = Long.MAX_VALUE;



            for (int i = 0; i < N; i++) {

                somaRangel += a[i];



                long somaGugu = total - somaRangel;

                long diferenca = Math.abs(somaRangel - somaGugu);



                melhor = Math.min(melhor, diferenca);

            }



            System.out.println(melhor);

        }



        sc.close();

    }

}

