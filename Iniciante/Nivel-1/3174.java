/*
 * Beecrowd | 3174 - Grupo de Trabalho do Noel
 * Categoria: Iniciante | Nível 1 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/3174
 */

/******************************************************************************

Todo ano, Papai Noel faz o recrutamento de elfos e gnomos para a sua equipe de preparação natalina.

O setor de sua produção que mais tem alterações ao longo do ano é o da fabricação dos presentes, pois ele contrata elfos temporários,

que trabalham uma determinada quantidade de horas H com ele. Além disso, cada elfo é contratado para um dos 4 diferentes grupos de trabalho,

onde cada um dos grupos possui uma quantidade de horas para produzir os presentes do tipo do grupo:



Grupo dos bonecos: 8 horas;

Grupo dos arquitetos: 4 horas;

Grupo dos musicos: 6 horas;

Grupo dos desenhistas: 12 horas.

Note que os trabalhadores do grupo dos bonecos só produzem bonecos, o dos arquitetos, casas, e assim sucessivamente.

Mas cada tipo de presente conta como um presente completo no final do dia.



O Papai Noel possui uma lista dos nomes dos elfos escolhidos esse ano, com a quantidade de horas e em que grupo que eles podem trabalhar.

Sabendo da sua habilidade com programação, o Noel quer uma forcinha sua para dizer para ele quantos presentes ele vai conseguir ter pronto,

por dia, de acordo com a quantidade de elfos que ele contratou.



Entrada

O primeiro valor da entrada é um valor inteiro N (1 ≤ N ≤ 1000), indicando a quantidade de elfos que o Papai Noel contratou.

As N linhas seguintes possuem três valores E, G e H (1 ≤ H ≤ 24), indicando respectivamente o nome do elfo,

em qual grupo ele vai trabalhar (em letras minúsculas) e quantas horas por dia ele irá ajudar (em valor inteiro).



Saída

A saída deverá ser um inteiro P, a quantidade total de presentes produzida por dia pela fábrica do Papai Noel.

*******************************************************************************/

import java.util.*;

import java.io.*;



public class Main {

 

    public static void main(String[] args) throws IOException {

        Scanner in = new Scanner(System.in);

        

        //Variáveis

        int casosTeste = in.nextInt();

        int quantidadeBrinquedos = 0;

        int quantidadeTrabalhoB = 0;

        int quantidadeTrabalhoA = 0;

        int quantidadeTrabalhoM = 0;

        int quantidadeTrabalhoD = 0;

        

        //Entrada e Desenvolvimento de Dados

        for(int i = 0; i < casosTeste; i++) {

            String nomeElfo = in.next();

            String brinquedo = in.next();

            int horasTrabalhadas = in.nextInt();

            

            if(brinquedo.equals("bonecos")) {

                quantidadeTrabalhoB += horasTrabalhadas;

            }

            

            if(brinquedo.equals("arquitetos")) {

                quantidadeTrabalhoA += horasTrabalhadas;

            }

           

            if(brinquedo.equals("musicos")) {

                quantidadeTrabalhoM += horasTrabalhadas;

            }

            

            if(brinquedo.equals("desenhistas")) {

                quantidadeTrabalhoD += horasTrabalhadas;

            }

        }

        

        quantidadeBrinquedos += (quantidadeTrabalhoB / 8) + (quantidadeTrabalhoA / 4) + (quantidadeTrabalhoM / 6) + (quantidadeTrabalhoD / 12);

        

        System.out.println(quantidadeBrinquedos);

        in.close();

    }

}