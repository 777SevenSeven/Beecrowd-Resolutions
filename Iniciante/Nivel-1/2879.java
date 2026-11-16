/*
 * Beecrowd | 2879 - Desvendando Monty Hall
 * Categoria: Iniciante | Nível 1 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2879
 */



import java.util.Scanner;



public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);



        int N = sc.nextInt();

        int vitorias = 0;



        for (int i = 0; i < N; i++) {

            int porta = sc.nextInt();



            if (porta != 1) {

                vitorias++;

            }

        }



        System.out.println(vitorias);

        sc.close();

    }

}

