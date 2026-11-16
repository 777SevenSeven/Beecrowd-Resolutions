#include <stdio.h>

int main() {
float media = 0, notaDoExame = 0, mediaFinal = 0, nota1 = 0, nota2 = 0, nota3 = 0, nota4 = 0;

//Entrada de Dados
scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

//Processamento de Dados
media = ((nota1*2) + (nota2*3) + (nota3*4) + (nota4*1))/(2 + 3 + 4 + 1);

//Aprovado
if (media >= 7.0) {
	printf("Media: %.1f\nAluno aprovado.\n", media);
}

//Exame
if (media >= 5.0 && media <= 6.9) {
	scanf("%f", &notaDoExame);
	printf("Media: %.1f\nAluno em exame.\n",media);
	mediaFinal = (media + notaDoExame)/2;
	if(mediaFinal >= 5.0) {
		printf("Nota do exame: %.1f\nAluno aprovado.\nMedia final: %.1f\n",notaDoExame,mediaFinal);
		}
	if(mediaFinal <= 4.9) {
		printf("Nota do exame: %.1f\nAluno reprovado.\nMedia final: %.1f\n",notaDoExame,mediaFinal);
	}
}

//Reprovado
if (media < 5.0) {
	printf("Media: %.1f\nAluno reprovado.\n", media);
}

return 0;
}

