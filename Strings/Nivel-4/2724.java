/*
 * Beecrowd | 2724 - Ajude Patatatitu
 * Categoria: Strings | Nível 4
 * Link: https://judge.beecrowd.com/pt/problems/view/2724
 */



import java.util.Scanner;

import java.util.ArrayList;

import java.util.regex.Matcher;

import java.util.regex.Pattern;



public class Main {



    static ArrayList<String> separarElementos(String formula) {

        ArrayList<String> elementos = new ArrayList<>();



        Pattern padrao = Pattern.compile("[A-Z][a-z]?\\d*");

        Matcher matcher = padrao.matcher(formula);



        while (matcher.find()) {

            String elemento = matcher.group();



            int i = 0;

            while (i < elemento.length() &&

                   Character.isLetter(elemento.charAt(i))) {

                i++;

            }



            String simbolo = elemento.substring(0, i);

            String quantidade = elemento.substring(i);



            if (quantidade.isEmpty()) {

                quantidade = "1";

            }



            elementos.add(simbolo + ":" + quantidade);

        }



        return elementos;

    }



    static boolean contemFormula(

            ArrayList<String> experimento,

            ArrayList<String> perigosa) {



        for (int i = 0;

             i <= experimento.size() - perigosa.size();

             i++) {



            boolean encontrou = true;



            for (int j = 0; j < perigosa.size(); j++) {

                if (!experimento.get(i + j)

                        .equals(perigosa.get(j))) {

                    encontrou = false;

                    break;

                }

            }



            if (encontrou) {

                return true;

            }

        }



        return false;

    }



    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);



        int n = sc.nextInt();



        for (int caso = 0; caso < n; caso++) {

            int t = sc.nextInt();



            ArrayList<ArrayList<String>> perigosas =

                    new ArrayList<>();



            for (int i = 0; i < t; i++) {

                perigosas.add(

                    separarElementos(sc.next())

                );

            }



            int u = sc.nextInt();



            if (caso > 0) {

                System.out.println();

            }



            for (int i = 0; i < u; i++) {

                ArrayList<String> experimento =

                        separarElementos(sc.next());



                boolean abortar = false;



                for (ArrayList<String> formula : perigosas) {

                    if (contemFormula(experimento, formula)) {

                        abortar = true;

                        break;

                    }

                }



                System.out.println(

                    abortar ? "Abortar" : "Prossiga"

                );

            }

        }



        sc.close();

    }

}

