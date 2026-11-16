/*
 * Beecrowd | 2721 - Indecisão das Renas
 * Categoria: Iniciante | Nível 3
 * Link: https://judge.beecrowd.com/pt/problems/view/2721
 */



import java.util.Scanner;



public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);



        String[] renas = {

            "Dasher", "Dancer", "Prancer",

            "Vixen", "Comet", "Cupid",

            "Donner", "Blitzen", "Rudolph"

        };



        int soma = 0;



        for (int i = 0; i < 9; i++) {

            soma += sc.nextInt();

        }



        int indice = (soma - 1) % 9;



        System.out.println(renas[indice]);



        sc.close();

    }

}

