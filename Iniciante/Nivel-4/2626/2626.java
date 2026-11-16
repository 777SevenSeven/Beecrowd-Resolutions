/*
 * Beecrowd | 2626 - Turma do JB6
 * Categoria: Iniciante | Nível 4
 * Link: https://judge.beecrowd.com/pt/problems/view/2626
 */

import java.io.IOException;

import java.util.Scanner;



public class Main {

    

    static boolean ganha(String x, String y) {

                return (x.equals("pedra") && y.equals("tesoura")) ||

                (x.equals("tesoura") && y.equals("papel")) ||

                (x.equals("papel") && y.equals("pedra"));

            }

 

    public static void main(String[] args) throws IOException {

 

        Scanner in = new Scanner(System.in);

        

        String A, B, C; 

        String repetida, unica;

        

        while(in.hasNext()) {

            A = in.next(); // Dodo

            B = in.next(); //Leo

            C = in.next(); //Pepper

            

            //Comparações entre dois valores, caso A ganhar de B e C: ganhou

            if(ganha(A,B) && ganha(A,C)) {

                System.out.println("Os atributos dos monstros vao ser inteligencia, sabedoria..."); //A (Dodo) venceu

            } else if(ganha(B,A) && ganha (B,C)) {

                System.out.println("Iron Maiden's gonna get you, no matter how far!"); //B (Leo) venceu

            } else if(ganha(C,A) && ganha(C,B)) {

                System.out.println("Urano perdeu algo muito precioso..."); //C (Pepper) venceu.

            } else {

                System.out.println("Putz vei, o Leo ta demorando muito pra jogar...");

            }

        }

    }

}