/*
 * Beecrowd | 1046 - Tempo de Jogo
 * Categoria: Iniciante | Nível 2 | Assunto: Seleção
 * Link: https://judge.beecrowd.com/pt/problems/view/1046
 */

#include <stdio.h>



int main () {

	int horaInicial = 0, horaFinal = 0, resultado = 0;



	//Entrada de Dados

	scanf("%d %d",&horaInicial, &horaFinal);

	

	//Processamento de Dados

	if(horaInicial < horaFinal) {

	resultado = horaFinal - horaInicial;

	}



	else if(horaInicial > horaFinal) {

	resultado = 24 - horaInicial + horaFinal;

	}

	

	else {

	    resultado = 24;

	}

	

	//Saída de Dados

	printf("O JOGO DUROU %d HORA(S)\n", resultado);

	

	return 0;

}