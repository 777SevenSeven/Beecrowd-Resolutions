/*
 * Beecrowd | 2167 - Falha do Motor
 * Categoria: Iniciante | Nível 2 | Assunto: Ad hoc, Vetor
 * Link: https://judge.beecrowd.com/pt/problems/view/2167
 */

import java.util.*;



public class Main {



    public static void main(String[] args) {



        Scanner in = new Scanner(System.in);



        int n = in.nextInt();



        int anterior = in.nextInt();



        int resposta = 0;



        for (int i = 2; i <= n; i++) {



            int atual = in.nextInt();



            if (resposta == 0 && atual < anterior) {

                resposta = i;

            }



            anterior = atual;

        }



        System.out.println(resposta);



        in.close();

    }

}