/*
 * Beecrowd | 2554 - Pizza Antes de BH
 * Categoria: Iniciante | Nível 3 | Assunto: Iniciante
 * Link: https://judge.beecrowd.com/pt/problems/view/2554
 */

import java.util.*;



public class Main {



    public static void main(String[] args) {



        Scanner in = new Scanner(System.in);



        while (in.hasNextInt()) {



            int n = in.nextInt();

            int d = in.nextInt();



            String resposta = "Pizza antes de FdI";



            for (int i = 0; i < d; i++) {



                String data = in.next();



                boolean todosPodem = true;



                for (int j = 0; j < n; j++) {



                    int pode = in.nextInt();



                    if (pode == 0) {

                        todosPodem = false;

                    }

                }



                // Guarda apenas a primeira data possível.

                if (todosPodem && resposta.equals("Pizza antes de FdI")) {

                    resposta = data;

                }

            }



            System.out.println(resposta);

        }



        in.close();

    }

}