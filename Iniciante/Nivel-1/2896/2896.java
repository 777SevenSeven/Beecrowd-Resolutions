/*
 * Beecrowd | 2896 - Aproveite a Oferta
 * Categoria: Iniciante | Nível 1 | Assunto: Matemática
 * Link: https://judge.beecrowd.com/pt/problems/view/2896
 */

import java.io.IOException;

import java.util.*;

/**

 * IMPORTANT: 

 *      O nome da classe deve ser "Main" para que a sua solução execute

 *      Class name must be "Main" for your solution to execute

 *      El nombre de la clase debe ser "Main" para que su solución ejecutar

 */

public class Main {

 

    public static void main(String[] args) throws IOException {

 

        Scanner in = new Scanner(System.in);

        

        int refrigerantesComprados = 0, garrafasVazias = 0, segundoDia = 0;

        

        int casosTeste = in.nextInt();

        

        for(int i = 0; i < casosTeste; i++) {

            refrigerantesComprados = in.nextInt();

            garrafasVazias = in.nextInt();

            

            segundoDia = Math.round((refrigerantesComprados / garrafasVazias) + (refrigerantesComprados % garrafasVazias));

            

            System.out.println(segundoDia);

        }

    }

}