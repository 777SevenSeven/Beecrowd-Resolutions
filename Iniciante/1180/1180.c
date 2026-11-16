#include <stdio.h>

int main () {
    int casosTeste = 0, menor = 0, posicao = 0, i = 0, j = 0;
    
    scanf("%d", &casosTeste);
       if(casosTeste > 1000 || casosTeste < 1) {
            return 1;
        }
    int vetor[casosTeste];
    //Entrada de Dados no vetor, com o uso de um loop
    for(i = 0; i < casosTeste; i++) { //"inicializo a váriavel i com 0, se i for menor que 5, i aumenta um, então faça:"
        scanf("%d", &vetor[i]); //o usuário entra com os valores
    }
    //Processamento dos dados do vetor, com o uso de um loop
    menor = vetor[0];
    for(j = 0; j < casosTeste; j++) {
        if(vetor[j] < menor) {
            menor = vetor[j];
            posicao = j;
        }
    }
    //saída dos dados do vetor, com o uso de um loop
            printf("Menor valor: %d\nPosicao: %d\n", menor, posicao);
                       
return 0;
}