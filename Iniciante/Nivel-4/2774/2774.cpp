/*
 * Beecrowd | 2774 - Precisão do Sensor
 * Categoria: Iniciante | Nível 4 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2774
 */

/******************************************************************************

O professor está te ensinando sobre sensores.

Este é um elemento muito importante em diversas aplicações.

Para aprender melhor os conceitos de precisão o professor pediu para realizar uma montagem prática do sensor Termo Ind v4.0 no novo laboratório de Automação.



Você como bom aluno anotou a fórmula para o cálculo da precisão de um sensor:



σ

=

√

∑

Q

T

1

(

X

i

−

¯¯¯¯¯

X

)

2

Q

T

−

1



Onde QT é a quantidade de vezes que foi realizado o teste, 

X

 o valor medido em cada teste e 

¯¯¯¯¯

X

 a média dos valores.



Para realizar o teste você ficou H horas fazendo testes, e a cada M minutos você verificou o valor X da temperatura entregue pelo sensor.



Agora que você tem as medidas, e como você tem a habilidade de programar, faça um programa que entregue a precisão do sensor.



Entrada

Existem vários casos de teste, cada caso consiste de duas linhas. A primeira contém dois valores H e M. E a segunda consiste dos valores de ponto flutuante Xi indicando o valor de cada medida do sensor.



É garantido que haverão no mínimo 5 e no máximo 105 medidas por caso e que estes valores estão no intervalo [0, 255] com duas casas decimais.



Saída

Para cada caso de teste, imprima uma única linha com um número indicando a precisão do sensor. O valor calculado deve ser apresentado com 5 dígitos após o ponto decimal.



Exemplo de Entrada	Exemplo de Saída

1 10



2.99 2.94 3.02 2.91 3.05 3.11



2 16



5.00 5.00 5.00 5.00 5.00 5.00 5.00



0.07312



0.00000

*******************************************************************************/

#include <iostream>

#include <cmath>

#include <iomanip>

#include <sstream>

#include <string>

#include <limits>



using namespace std;



int main()

{

    // Variáveis

    int HorasFazendoTeste = 0;

    int MinutosChecando = 0;

    int quantidadeTeste = 0;



    double medidasSensor[100000] = {};

    double soma = 0;

    double media = 0;

    double somaQuadrados = 0;

    double precisaoSensor = 0;



    string linha;



    // Entrada de Dados

    while (cin >> HorasFazendoTeste >> MinutosChecando)

    {

        cin.ignore(numeric_limits<streamsize>::max(), '\n');



        getline(cin, linha);



        stringstream entrada(linha);



        quantidadeTeste = 0;

        soma = 0;



        // Recebendo os valores do sensor

        while (entrada >> medidasSensor[quantidadeTeste])

        {

            soma += medidasSensor[quantidadeTeste];

            quantidadeTeste++;

        }



        // Calculando a média

        media = soma / quantidadeTeste;



        // Somatório de (Xi - média)²

        somaQuadrados = 0;



        for (int i = 0; i < quantidadeTeste; i++)

        {

            somaQuadrados += pow(medidasSensor[i] - media, 2);

        }



        // Aplicando a fórmula

        precisaoSensor = sqrt(

            somaQuadrados / (quantidadeTeste - 1)

        );



        // Saída

        cout << fixed << setprecision(5)

             << precisaoSensor << endl;

    }



    return 0;

}