/*
 * Beecrowd | 2770 - Tamanho da Placa
 * Categoria: Iniciante | Nível 7 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2770
 */

import java.io.IOException;

import java.io.BufferedInputStream;

 

/**

 * IMPORTANT: 

 *      O nome da classe deve ser "Main" para que a sua solução execute

 *      Class name must be "Main" for your solution to execute

 *      El nombre de la clase debe ser "Main" para que su solución ejecutar

 */

public class Main {

    public static void main(String[] args) throws IOException {

        BufferedInputStream in =

            new BufferedInputStream(System.in);



        StringBuilder out = new StringBuilder();



        int c;



        while (true) {

            c = in.read();

            while (c <= 32 && c != -1) {

                c = in.read();

            }



            if (c == -1) break;



            int X = 0;

            do {

                X = X * 10 + c - '0';

                c = in.read();

            } while (c > 32);



            int Y = nextInt(in);

            int M = nextInt(in);



            for (int i = 0; i < M; i++) {

                int Xi = nextInt(in);

                int Yi = nextInt(in);



                if ((Xi <= X && Yi <= Y) ||

                    (Xi <= Y && Yi <= X)) {

                    out.append("Sim\n");

                } else {

                    out.append("Nao\n");

                }

            }

        }



        System.out.print(out);

    }



    static int nextInt(BufferedInputStream in) throws IOException {

        int c = in.read();



        while (c <= 32 && c != -1) {

            c = in.read();

        }



        int n = 0;



        while (c > 32) {

            n = n * 10 + c - '0';

            c = in.read();

        }



        return n;

    }

}