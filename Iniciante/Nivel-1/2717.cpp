/*
 * Beecrowd | 2717 - Tempo do Duende
 * Categoria: Iniciante | Nível 1 | Assunto: Iniciante
 * Link: https://judge.beecrowd.com/pt/problems/view/2717
 */

#include <iostream>

using namespace std;

 

int main() {

 

   //Variáveis

   int minutosRestantes = 0, presenteUm = 0, presenteDois = 0;

   

   //Entrada de Dados

   cin >> minutosRestantes;

   cin >> presenteUm >> presenteDois;

   

   //Desenvolvimento e Saída de Dados

   if((presenteUm + presenteDois) > minutosRestantes) {

       cout << "Deixa para amanha!" << endl;

   } else {

       cout << "Farei hoje!" << endl;

   }

 

    return 0;

}