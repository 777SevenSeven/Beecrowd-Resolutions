/*
 * Beecrowd | 2963 - Bobo da Corte
 * Categoria: Iniciante | Nível 3 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2963
 */



import java.util.Scanner;



public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);



        int N = sc.nextInt();

        int carlos = sc.nextInt();

        boolean venceu = true;



        for (int i = 1; i < N; i++) {

            int votos = sc.nextInt();



            if (votos > carlos) {

                venceu = false;

            }

        }



        System.out.println(venceu ? "S" : "N");



        sc.close();

    }

}

