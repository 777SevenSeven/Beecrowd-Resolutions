/*
 * Beecrowd | 2172 - Evento
 * Categoria: Iniciante | Nível 1 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2172
 */

/******************************************************************************

A produtora do jogo, Jogos Extremos, anunciou que na próxima semana irá realizar o primeiro evento XP no qual aumentará a experiência dos monstros em X vezes.

eles estão tendo dificuldades de calcular a quantidade de pontos de experiência que os monstros terão durante o evento. Você pode ajudá-los?



Entrada

Haverá diversos casos de teste.

Cada caso de teste contém dois valores X (0 < X ≤ 3) indicando o valor de aumento da EXP dos monstros e 

M (10 ≤ M ≤ 232-1) indicando o valor de EXP do monstro. 

A entrada termina com os valores X == 0 e M == 0, nos quais não devem ser processados.



Saída

Para cada caso, seu programa deverá mostrar um valor E, referente ao novo EXP do monstro.



*******************************************************************************/

import java.io.IOException;

import java.util.Scanner;



public class Main

{

	public static void main(String[] args) {

		Scanner in = new Scanner(System.in);

		

		int multiplicador = 1;

		long XPAntes = 1;

		

		while(true) {

		    

    		multiplicador = in.nextInt();

    		XPAntes = in.nextLong();

    		

    		if(multiplicador == 0 && XPAntes == 0) {

    		    break;

    		}

    		

    		long XPAgora = multiplicador * XPAntes;

    		

    		System.out.println(XPAgora);

		}

		

		

	}

}

