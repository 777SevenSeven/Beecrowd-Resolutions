/*
 * Beecrowd | 3249 - Death Knight Hero
 * Categoria: Iniciante | Nível 5 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/3249
 */

/*

Entrada

Você recebe uma gravação das habilidades que nosso herói usou em suas batalhas.



A primeira linha de entrada conterá um único inteiro n (1 ≤ n ≤ 100), o número de batalhas que nosso herói jogou.



Em seguida, siga n linhas, cada uma com uma sequência de caracteres ki (1 ≤ ki ≤ 1000), cada um dos quais sendo 'C', 'D' ou 'O'.

Isso denota a sequência de habilidades usadas por nosso herói na i-ésima batalha. 'C' é Chains of Ice, 'D' é Death Grip e 'O' é Obliterate.



Saída

Imprima o número de batalhas que nosso herói venceu, supondo que ele venceu cada batalha em que não usou Chains of Ice imediatamente seguido por Death Grip.



Exemplo de Entrada	Exemplo de Saída

3

DCOOO

DODOCD

COD

2

*******************************************************************************/

#include <iostream>

#include <string>

using namespace std;



int main()

{

    //Variáveis

    string skills;

    string comboPerdedor = "CD";

    

    int batalhasVencidas = 0, numeroBatalhas = 0;

    

    //Entrada de Dados

    cin >> numeroBatalhas;

    

    //Desenvolvimento de Dados

    for(int i = 0; i < numeroBatalhas; i++) {

        cin >> skills;

        if(skills.find(comboPerdedor) == string::npos) {

            batalhasVencidas++;

        } else {

            continue;

        }

    }

    

    //Saída de Dados

    cout << batalhasVencidas << endl;



    return 0;

}