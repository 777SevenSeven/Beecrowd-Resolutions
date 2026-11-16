/*
 * Beecrowd | 2162 - Picos e Vales
 * Categoria: Iniciante | Nível 4 | Assunto: Ad hoc, Vetor
 * Link: https://judge.beecrowd.com/pt/problems/view/2162
 */

import java.util.*;



public class Main {



    public static void main(String[] args) {



        Scanner in = new Scanner(System.in);



        int n = in.nextInt();



        int anterior = in.nextInt();



        // 1 = subida

        // -1 = descida

        // 0 = ainda não existe direção

        int direcao = 0;



        boolean valido = true;



        for (int i = 1; i < n; i++) {



            int atual = in.nextInt();



            if (atual == anterior) {

                valido = false;

            }

            else {



                int novaDirecao;



                if (atual > anterior) {

                    novaDirecao = 1;

                }

                else {

                    novaDirecao = -1;

                }



                // Se a direção se repetiu, não há alternância

                if (direcao == novaDirecao) {

                    valido = false;

                }



                direcao = novaDirecao;

            }



            anterior = atual;

        }



        if (valido) {

            System.out.println(1);

        }

        else {

            System.out.println(0);

        }



        in.close();

    }

}