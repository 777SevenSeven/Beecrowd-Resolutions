/*
 * Beecrowd | 1080 - Maior e Posição
 * Categoria: Iniciante | Nível 2 | Assunto: Repetição
 * Link: https://judge.beecrowd.com/pt/problems/view/1080
 */

#include <stdio.h>



int main(){



    int valores[100],cont =0,maior=0, linha=0;



    while(cont<100){



        scanf("%d",&valores[cont]);



        if (cont == 0 || valores[cont] > maior){

            maior = valores[cont];

            linha = cont;

        }



        cont ++;

    }



    printf("%d\n%d\n", maior, linha+1);



    return 0;

}

