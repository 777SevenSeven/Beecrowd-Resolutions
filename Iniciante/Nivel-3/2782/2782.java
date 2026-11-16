/*
 * Beecrowd | 2782 - Escadinha
 * Categoria: Iniciante | Nível 3 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2782
 */

import java.util.*;



public class Main {



    public static void main(String[] args) {



        Scanner in = new Scanner(System.in);



        int n = in.nextInt();



        int anterior = in.nextInt();



        if (n == 1) {

            System.out.println(1);

            return;

        }



        int atual = in.nextInt();



        int diferenca = atual - anterior;

        int escadinhas = 1;



        anterior = atual;



        for (int i = 2; i < n; i++) {



            atual = in.nextInt();



            int novaDiferenca = atual - anterior;



            if (novaDiferenca != diferenca) {

                escadinhas++;

                diferenca = novaDiferenca;

            }



            anterior = atual;

        }



        System.out.println(escadinhas);



        in.close();

    }

}