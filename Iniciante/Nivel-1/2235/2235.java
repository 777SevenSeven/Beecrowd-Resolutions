/*
 * Beecrowd | 2235 - Andando no Tempo
 * Categoria: Iniciante | Nível 1 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2235
 */

import java.util.*;



public class Main {



    public static void main(String[] args) {



        Scanner in = new Scanner(System.in);



        int A = in.nextInt();

        int B = in.nextInt();

        int C = in.nextInt();



        if (A == B || A == C || B == C ||

            A + B == C || A + C == B || B + C == A) {



            System.out.println("S");



        } else {



            System.out.println("N");

        }



        in.close();

    }

}