/******************************************************************************
Neste problema, você precisa ajudar Ana e suas amigas a determinar se, dados os comprimentos de quatro varetas,
é ou não é possível selecionar três varetas, dentre as quatro, e formar um triângulo.

Entrada
A entrada é composta por apenas uma linha contendo quatro números inteiros A, B, C e D (1 ≤ A, B, C, D ≤ 100).

Saída
Seu programa deve produzir apenas uma linha contendo apenas um caractere, que deve ser ‘S’ caso seja possível formar o triângulo,
ou ‘N’ caso não seja possível formar o triângulo.

Exemplo de Entrada
6 9 22 15

14 40 12 60

Exemplo de Saída
S

N
*******************************************************************************/
#include <stdio.h>

int main()
{
   //Variáveis
   int varetaUm = 0, varetaDois = 0, varetaTres = 0, varetaQuatro = 0;
   
   //Entrada de dados
   scanf("%d %d %d %d", &varetaUm, &varetaDois, &varetaTres, &varetaQuatro);
   
   //Desenvolvimento de dados
   if( (varetaUm + varetaDois > varetaTres && varetaUm + varetaTres > varetaDois && varetaDois + varetaTres > varetaUm) // a,b,c
   || (varetaUm + varetaDois > varetaQuatro && varetaUm + varetaQuatro > varetaDois && varetaDois + varetaQuatro > varetaUm) // a,b,d
   || (varetaUm + varetaTres > varetaQuatro && varetaUm + varetaQuatro > varetaTres && varetaTres + varetaQuatro > varetaUm) // a,c,d
   || (varetaDois + varetaTres > varetaQuatro && varetaDois + varetaQuatro > varetaTres && varetaTres + varetaQuatro > varetaDois) // b,c,d
   ) {
       //Saída de Dados
       puts("S");
   } else {
       puts("N");   
   }

   return 0;
}

