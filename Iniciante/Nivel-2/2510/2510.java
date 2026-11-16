/*
 * Beecrowd | 2510 - Batmain
 * Categoria: Iniciante | Nível 2
 * Link: https://judge.beecrowd.com/pt/problems/view/2510
 */

import java.util.*;



public class Main {



    public static void main(String[] args) {



        Scanner in = new Scanner(System.in);



        int casosTeste = in.nextInt();



        for (int i = 0; i < casosTeste; i++) {



            String vilao = in.next();



            if (vilao.equals("Coringa")) {

                System.out.println("N");

            }

            else {

                System.out.println("Y");

            }

        }



        in.close();

    }

}