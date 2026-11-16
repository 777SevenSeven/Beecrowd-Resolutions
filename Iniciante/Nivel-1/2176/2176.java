/*
 * Beecrowd | 2176 - Paridade
 * Categoria: Iniciante | Nível 1 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2176
 */

import java.util.*;



public class Main {



    public static void main(String[] args) {



        Scanner in = new Scanner(System.in);



        String mensagem = in.next();



        int quantidadeUns = 0;



        for (int i = 0; i < mensagem.length(); i++) {



            if (mensagem.charAt(i) == '1') {

                quantidadeUns++;

            }

        }



        if (quantidadeUns % 2 == 0) {

            System.out.println(mensagem + "0");

        }

        else {

            System.out.println(mensagem + "1");

        }



        in.close();

    }

}