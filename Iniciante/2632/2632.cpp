/******************************************************************************

No tower defense Magic and Sword, o jogador pode lançar magias de área para derrotar as unidades inimigas. As magias são elementais:
fogo, água, ar e terra, e a região afetada é determinada por um círculo cujo raio depende do nível da magia.

A tabela abaixo lista cada magia, o dano e o respectivo raio por nível:

As unidades inimigas são delimitadas por um retângulo de largura w e altura h, com canto inferior esquerdo posicionado no ponto (x0, y0).
O inimigo sofrerá dano caso seu retângulo delimitador tenha qualquer intercessão com a área deﬁnida pelo círculo da magia.

Dada a posição e o retângulo delimitador da unidade inimiga, o centro da explosão e o identiﬁcador e o nível da magia, determine o dano sofrido pela unidade. 
Caso a unidade esteja fora do alcance da magia, o dano sofrido é igual a zero.

Entrada
A entrada consiste em T (1 ≤ T ≤ 1000) casos de teste, onde o valor de T é informado na primeira linha da entrada.
Cada caso de teste é composto por duas linhas. 
A primeira contém quatro número inteiros que repre-sentam as dimensões w e h (1 ≤ w, h ≤ 1000)
do retângulo e as coordenadas x0 e y0 (0 ≤ x0, y0 ≤ 1000) do canto inferior esquerdo.
A segunda linha do caso de teste contém uma string com o identiﬁcador da magia (ﬁre para fogo, water para água, earth para terra e air para ar),
o nível N desta magia (1 ≤ N ≤ 3) e as coordenadas cx e cy (0 ≤ cx, cy ≤ 1000) do centro da área da explosão.

Saída
Para cada caso de teste, a saída deve ser o valor do dano recebido pela unidade, seguido de uma quebra de linha.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Variáveis
    int casosTeste = 0;

    int width = 0;
    int height = 0;
    int x0 = 0;
    int y0 = 0;

    string tipoMagia;
    int nivelMagia = 0;
    int cx = 0;
    int cy = 0;

    int raioMagia = 0;
    int danoRecebido = 0;

    // Entrada de Dados
    cin >> casosTeste;

    for(int i = 0; i < casosTeste; i++)
    {
        cin >> width >> height >> x0 >> y0;
        cin >> tipoMagia >> nivelMagia >> cx >> cy;

        // Descobrindo dano e raio da magia
        if(tipoMagia == "fire")
        {
            danoRecebido = 200;

            if(nivelMagia == 1)
                raioMagia = 20;
            else if(nivelMagia == 2)
                raioMagia = 30;
            else
                raioMagia = 50;
        }
        else if(tipoMagia == "water")
        {
            danoRecebido = 300;

            if(nivelMagia == 1)
                raioMagia = 10;
            else if(nivelMagia == 2)
                raioMagia = 25;
            else
                raioMagia = 40;
        }
        else if(tipoMagia == "earth")
        {
            danoRecebido = 400;

            if(nivelMagia == 1)
                raioMagia = 25;
            else if(nivelMagia == 2)
                raioMagia = 55;
            else
                raioMagia = 70;
        }
        else if(tipoMagia == "air")
        {
            danoRecebido = 100;

            if(nivelMagia == 1)
                raioMagia = 18;
            else if(nivelMagia == 2)
                raioMagia = 38;
            else
                raioMagia = 60;
        }

        // Descobrindo o ponto do retângulo mais próximo do centro
        int pontoX = 0;
        int pontoY = 0;

        if(cx < x0)
            pontoX = x0;
        else if(cx > x0 + width)
            pontoX = x0 + width;
        else
            pontoX = cx;

        if(cy < y0)
            pontoY = y0;
        else if(cy > y0 + height)
            pontoY = y0 + height;
        else
            pontoY = cy;

        // Distância entre o centro da explosão e o ponto mais próximo
        int distanciaX = cx - pontoX;
        int distanciaY = cy - pontoY;

        int distanciaQuadrado = distanciaX * distanciaX
                              + distanciaY * distanciaY;

        int raioQuadrado = raioMagia * raioMagia;

        // Verificando se o círculo intercepta o retângulo
        if(distanciaQuadrado <= raioQuadrado)
            cout << danoRecebido << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}