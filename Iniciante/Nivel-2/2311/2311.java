/*
 * Beecrowd | 2311 - Saltos Ornamentais
 * Categoria: Iniciante | Nível 2 | Assunto: Repetição
 * Link: https://judge.beecrowd.com/pt/problems/view/2311
 */

import java.util.*;



public class Main {



    public static void main(String[] args) {



        Scanner in = new Scanner(System.in);



        int n = in.nextInt();



        for (int i = 0; i < n; i++) {



            String nome = in.next();

            double dificuldade = in.nextDouble();



            double soma = 0;

            double maior = 0;

            double menor = 10;



            for (int j = 0; j < 7; j++) {



                double nota = in.nextDouble();



                soma += nota;



                if (nota > maior) {

                    maior = nota;

                }



                if (nota < menor) {

                    menor = nota;

                }

            }



            double resultado = (soma - maior - menor) * dificuldade;



            System.out.printf("%s %.2f%n", nome, resultado);

        }



        in.close();

    }

}