/*
 * Beecrowd | 2951 - O Retorno do Rei
 * Categoria: Iniciante | Nível 3 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2951
 */



import java.util.Scanner;



public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);



        int N = sc.nextInt();

        int G = sc.nextInt();



        int[] runas = new int[26];



        for (int i = 0; i < N; i++) {

            char letra = sc.next().charAt(0);

            int valor = sc.nextInt();



            runas[letra - 'A'] = valor;

        }



        int X = sc.nextInt();

        int amizade = 0;



        for (int i = 0; i < X; i++) {

            char letra = sc.next().charAt(0);

            amizade += runas[letra - 'A'];

        }



        System.out.println(amizade);



        if (amizade >= G) {

            System.out.println("You shall pass!");

        } else {

            System.out.println("My precioooous");

        }



        sc.close();

    }

}

