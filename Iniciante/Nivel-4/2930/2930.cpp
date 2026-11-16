/*
 * Beecrowd | 2930 - TCC da Depressão Natalino
 * Categoria: Iniciante | Nível 4 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2930
 */

/******************************************************************************

Entrada

A entrada é composta por um valor E (0 < E < 25) representando o dia que foi entregue o tcc pra verificação. Um valor D (0 < D < 25) que representa a data final

pra entregar para verificação.



Saída

Mostre, para cada caso de teste, se a acadêmica apresentará ou não. A única possibilidade da entrega não ser realizada na data é por falta de orientação da Takanada.

Caso não seja possivel, imprima "Eu odeio a professora!". Caso seja entregue em até 3 dias antes do prazo final, imprima "Muito bem! Apresenta antes do Natal!", 

caso contrário, sendo muito próximo da data limite imprima "Parece o trabalho do meu filho!", 

nesse ultimo caso, é adicionado mais dois dias para correções, e caso a data final seja menor que a véspera do natal(24), 

ela poderá apresentar, sendo impresso "TCC Apresentado!", caso contrário imprima "Fail! Entao eh nataaaaal!"



Exemplos de Entrada	Exemplos de Saída

13 19



Muito bem! Apresenta antes do Natal!



22 23



Parece o trabalho do meu filho!

Fail! Entao eh nataaaaal!



21 22



Parece o trabalho do meu filho!

TCC Apresentado!

*******************************************************************************/

#include <iostream>

using namespace std;



int main()

{

    //Variáveis

    int E = 0, D = 0;

    

    //Entrada de Dados

    cin >> E >> D;

    

    //Desenvolvimento de Dados

    if(D - E <= 0) {

        cout << "Eu odeio a professora!" << endl;

        return 0;

    }

    

    if(D - E >= 3) {

        cout << "Muito bem! Apresenta antes do Natal!" << endl;

    } else {

        cout << "Parece o trabalho do meu filho!" << endl;

        E+=2;

        if(E < 24) {

            cout << "TCC Apresentado!" << endl;

        } else {

            cout << "Fail! Entao eh nataaaaal!" << endl;

        }

    }



    return 0;

}