/*
 * Beecrowd | 2334 - Patinhos
 * Categoria: Iniciante | Nível 3
 * Link: https://judge.beecrowd.com/pt/problems/view/2334
 */

import java.io.BufferedReader;

import java.io.IOException;

import java.io.InputStreamReader;

import java.math.BigInteger;



public class Main {



public static void main(String[] args) throws IOException {



    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    

    while (true) {

        BigInteger P = new BigInteger(br.readLine());

        

        if (P.equals(BigInteger.valueOf(-1))) {

            break;

        }

        

        if (P.equals(BigInteger.ZERO)) {

            System.out.println(0);

        } else {

            System.out.println(P.subtract(BigInteger.ONE));

            }

        }

    }

}