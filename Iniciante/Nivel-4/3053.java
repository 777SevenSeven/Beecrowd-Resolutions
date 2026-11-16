/*
 * Beecrowd | 3053 - Jogo Dos Copos
 * Categoria: Iniciante | Nível 4 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/3053
 */



import java.util.Scanner;



public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);



        int n = sc.nextInt();

        char posicao = sc.next().charAt(0);



        for (int i = 0; i < n; i++) {

            int movimento = sc.nextInt();



            if (movimento == 1) {

                if (posicao == 'A') {

                    posicao = 'B';

                } else if (posicao == 'B') {

                    posicao = 'A';

                }

            } else if (movimento == 2) {

                if (posicao == 'B') {

                    posicao = 'C';

                } else if (posicao == 'C') {

                    posicao = 'B';

                }

            } else if (movimento == 3) {

                if (posicao == 'A') {

                    posicao = 'C';

                } else if (posicao == 'C') {

                    posicao = 'A';

                }

            }

        }



        System.out.println(posicao);



        sc.close();

    }

}

