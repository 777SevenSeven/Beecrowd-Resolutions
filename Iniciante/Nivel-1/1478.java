/*
 * Beecrowd | 1478 - Matriz Quadrada II
 * Categoria: Iniciante | Nível 1 | Assunto: Matrizes
 * Link: https://judge.beecrowd.com/pt/problems/view/1478
 */



import java.io.BufferedReader;

import java.io.InputStreamReader;



public class Main {

    public static void main(String[] args) throws Exception {

        BufferedReader br = new BufferedReader(

            new InputStreamReader(System.in)

        );



        StringBuilder out = new StringBuilder();

        String linha;



        while ((linha = br.readLine()) != null) {

            int N = Integer.parseInt(linha.trim());



            if (N == 0) {

                break;

            }



            for (int i = 0; i < N; i++) {

                for (int j = 0; j < N; j++) {

                    int valor = (i >= j) ? (i - j + 1) : (j - i + 1);



                    if (j > 0) {

                        out.append(' ');

                    }



                    if (valor < 10) {

                        out.append("  ");

                    } else if (valor < 100) {

                        out.append(' ');

                    }



                    out.append(valor);

                }



                out.append('\n');

            }



            out.append('\n');

        }



        System.out.print(out);

    }

}

