/*
 * Beecrowd | 2686 - A Mudança Continua!!
 * Categoria: Iniciante | Nível 5
 * Link: https://judge.beecrowd.com/pt/problems/view/2686
 */

/******************************************************************************



Novamente Júlio pede sua ajuda, ele esqueceu de um pequeno detalhe. Como o seu o programa anterior só informava uma saudação,

ele pediu que transformasse o grau do Sol/Lua em HH:MM:SS. 

Então caso aceite: dado um grau relativo a posição do Sol/Lua,

refaça o sistema só que agora além da saudação de cada período do dia, informe exatamente as horas, os minutos e segundos.



Entrada

A entrada contem um pontos flutuantes M (0 ≥ M < 360) representando a posição, 

em graus,do Sol/Lua em relação a terra. 

Como eles andam em constante movimento seu programa receberá diversos casos a cada segundo(EOF).



Saída

Imprima qual período do dia ele se encontra: "Boa Tarde!!", "Boa Noite!!", "Bom Dia!!" e "De Madrugada!!",

e na linhas de baixo exiba as horas, minutos e segundos (HH:MM:SS).

*******************************************************************************/

#include <iostream>

#include <iomanip>

#include <cmath>



using namespace std;



int main()

{

    // Variáveis

    double graus = 0;

    int totalSegundos = 0;

    int horas = 0;

    int minutos = 0;

    int segundos = 0;



    // Entrada de Dados

    while(cin >> graus)

    {

        // Desenvolvimento de Dados



        // 360 graus correspondem a 24 horas

        // O horário começa 90 graus depois da posição 0

        totalSegundos = round((graus + 90) / 360.0 * 86400);



        // Como o círculo é contínuo, 360 graus volta para 0

        totalSegundos %= 86400;



        horas = totalSegundos / 3600;

        minutos = (totalSegundos % 3600) / 60;

        segundos = totalSegundos % 60;



        // Saída de Dados

        if(graus >= 0 && graus < 90)

        {

            cout << "Bom Dia!!" << endl;

        }

        else if(graus >= 90 && graus < 180)

        {

            cout << "Boa Tarde!!" << endl;

        }

        else if(graus >= 180 && graus < 270)

        {

            cout << "Boa Noite!!" << endl;

        }

        else

        {

            cout << "De Madrugada!!" << endl;

        }



        cout << setfill('0') << setw(2) << horas << ":"

             << setw(2) << minutos << ":"

             << setw(2) << segundos << endl;

    }



    return 0;

}