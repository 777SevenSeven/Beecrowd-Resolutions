#include <stdio.h>
int main() {
	int numero1 = 0, numero2 = 0, numero3 = 0, menor = 0, segundoMenor = 0, maior = 0;
	
	//Entrada de Dados
	scanf("%d %d %d", &numero1, &numero2, &numero3);
	
	//Processamento de Dados
	
	//menor
	menor = numero1; //menor recebe o numero 1 como um teste
	if(numero2 < menor) { //caso o numero2 for menor que o numero1
		menor = numero2; //o menor recebe numero2
	} 
	if(numero3 < menor) { //se o numero3 for menor que o menor
		menor = numero3; //menor recebe numero3
	}

	//maior
	maior = numero1;
	if(numero2 > maior) { 
		maior = numero2;
	}
	if(numero3 > maior) {
		maior = numero3;
	}
	
	//segundoMenor
	segundoMenor = menor; //segundo menor recebe o numero 1 como um teste
	if(numero1 > segundoMenor && numero1 < maior) { 
		segundoMenor = numero1; 
	}
	
	if(numero2 > segundoMenor && numero2 < maior) { 
		segundoMenor = numero2; 
	}
	
	if(numero3 > segundoMenor && numero3 < maior) { 
		segundoMenor = numero3; 
	}

	
	//Saída de Dados
	printf("%d\n%d\n%d\n", menor, segundoMenor, maior);
	printf("\n%d\n%d\n%d\n",numero1,numero2,numero3);
return 0;
}