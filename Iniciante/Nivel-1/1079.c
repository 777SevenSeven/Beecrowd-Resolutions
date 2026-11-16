/*
 * Beecrowd | 1079 - Médias Ponderadas
 * Categoria: Iniciante | Nível 1 | Assunto: Repetição
 * Link: https://judge.beecrowd.com/pt/problems/view/1079
 */

#include <stdio.h>

int main()

{

int N = 0, cont = 1; //Variáveis.

float numero1 = 0, numero2 = 0, numero3 = 0, media1 = 0, media2 = 0, media3 = 0; //Variáveis.



//Entrada de Dados

scanf ("%d", &N); //Lendo o número de quantos casos testes.



//Processamento de Dados

while (cont <= N ) { //Dando a condição para ele repetir.

scanf("%f %f %f", &numero1, &numero2, &numero3); //Vai ler os números que terá de fazer a média.

 

media1 = numero1 * 2.0; //O primeiro produto do número vezes o peso.





media2 = numero2 * 3.0;





media3 = numero3 * 5.0;



cont++; //O contador de teste vai subir a cada vez que o while reiniciar.

float mediaPonderada = (media1 + media2 + media3) / (2.0 + 3.0 + 5.0); //O cálculo da média ponderada.

printf("%.1f\n", mediaPonderada); //Aqui ele mostra a média ponderada resultante.

}



return 0;

}

