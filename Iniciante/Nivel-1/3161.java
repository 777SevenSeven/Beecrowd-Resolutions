/*
 * Beecrowd | 3161 - As Frutas Esquecidas
 * Categoria: Iniciante | Nível 1 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/3161
 */

/******************************************************************************

Sheldon Cooper é um personagem excêntrico existente no universo de Hollywood.

Recentemente ele sofreu um acidente e acabou esquecendo quais frutas gosta de comer.

Contudo, é chegada a hora de preparar o café da manhã e Sheldon não quer passar pela experiência de provar uma fruta e descobrir que não gosta dela.

Então, incomodado com essa situação, Sheldon convenceu seu amigo Leonard Hofstadter a lhe ajudar.

Leonard lembra do momento que conheceu Sheldon e devido as excentricidades de seu amigo, ele guardou em seu computador uma lista

com o nome das frutas que Sheldon gosta de comer.

Leonard muito animado com sua sagacidade, abre o arquivo e observa que algo está errado: o conteúdo do arquivo foi embaralhado por um vírus de computador.



Determinado a resolve essa questão, Leonard fez experimentos e concluiu que é possível ler o conteúdo do arquivo e descobrir

se Sheldon gosta ou não de uma dada fruta. Pelos experimentos, Leonard observou que o vírus fez alguma(s) 

das seguintes alterações: 

1) Incluiu novos caracteres à esquerda e/ou à direita ao nome da fruta que estava na lista; 

2) Alterou algumas letras, neste caso, algumas se tornaram maiúsculas e outras minúsculas; 

3) O nome da fruta que estava na lista foi invertido ("Bergamota" => "Atomagreb"). 

Como Leonard estudou programação, ele irá criar um programa que recebe o nome de uma fruta e retorna se Sheldon gosta ou não dessa fruta.



Entrada

A primeira linha contém dois inteiros: 

1) N que representa a quantidade de nomes de frutas que será verificado/procurado, limitado por [1,100]; 

2) M que representa a quantidade de linhas da lista de nomes das frutas, limitado por [15,500]; 

Além disso, cada linha M da lista de nomes e cada linha N com o nome de fruta seguem o limite: [4,100].



Saída

Para cada nome de fruta procurado, informe: “Sheldon come a fruta X” ou “Sheldon detesta a fruta X” (onde X é nome da fruta que foi verificada na lista em lowercase).

*******************************************************************************/

import java.io.IOException;

import java.util.*;



public class Main {



    public static void main(String[] args) throws IOException {



        Scanner in = new Scanner(System.in);



        int quantidadeFrutas = in.nextInt(); // N

        int linhaNomeFrutas = in.nextInt();  // M



        // Primeiro vêm as N frutas que serão procuradas

        String[] frutasProcuradas = new String[quantidadeFrutas];



        for (int i = 0; i < quantidadeFrutas; i++) {

            frutasProcuradas[i] = in.next().toLowerCase();

        }



        // Depois vêm as M linhas do arquivo corrompido

        String[] nomesFrutas = new String[linhaNomeFrutas];



        for (int i = 0; i < linhaNomeFrutas; i++) {

            nomesFrutas[i] = in.next().toLowerCase();

        }



        // Faz as consultas

        for (int i = 0; i < quantidadeFrutas; i++) {



            String frutaProcurada = frutasProcuradas[i];



            String frutaInvertida =

                    new StringBuilder(frutaProcurada).reverse().toString();



            boolean encontrou = false;



            // Procura a fruta nas linhas corrompidas

            for (int j = 0; j < linhaNomeFrutas; j++) {



                String frutaDaLista = nomesFrutas[j];



                if (frutaDaLista.contains(frutaProcurada)

                        || frutaDaLista.contains(frutaInvertida)) {



                    encontrou = true;

                    break;

                }

            }



            if (encontrou) {

                System.out.println(

                    "Sheldon come a fruta " + frutaProcurada

                );

            } else {

                System.out.println(

                    "Sheldon detesta a fruta " + frutaProcurada

                );

            }

        }



        in.close();

    }

}