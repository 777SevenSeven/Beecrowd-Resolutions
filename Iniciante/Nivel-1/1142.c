/*
 * Beecrowd | 1142 - PUM
 * Categoria: Iniciante | Nível 1 | Assunto: Repetição
 * Link: https://judge.beecrowd.com/pt/problems/view/1142
 */



#include <stdio.h>



int main()

{

   int Nvezes = 0, cont1 = 1, cont2 = 2, cont3 = 3, aux = 1; //Variáveis

   

   //Entrada de Dados

   scanf("%d", &Nvezes); //Recebe do usuário a quantidade de linhas que ele quer a frase

   

   for(aux = 1; aux <= Nvezes; aux++) { //Loop que vai se repetir toda vez que o aux for menor ou igual a Nvezes

        printf("%d %d %d PUM\n", cont1, cont2, cont3); //Ele irá mostrar os 3 números da linha com o ''PUM'' no final quebrando linha

        cont1+=4; 

        cont2+=4;

        cont3+=4;

    }

    return 0;

}

