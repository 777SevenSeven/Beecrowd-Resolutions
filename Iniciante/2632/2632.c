#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis
    int casosTeste = 0;

    int width = 0;
    int height = 0;
    int x0 = 0;
    int y0 = 0;

    char tipoMagia[10];
    int nivelMagia = 0;
    int cx = 0;
    int cy = 0;

    int raioMagia = 0;
    int danoRecebido = 0;

    // Entrada de Dados
    scanf("%d", &casosTeste);

    for (int i = 0; i < casosTeste; i++) {
        scanf("%d %d %d %d", &width, &height, &x0, &y0);
        scanf("%s %d %d %d", tipoMagia, &nivelMagia, &cx, &cy);

        // Descobrindo dano e raio da magia
        if (strcmp(tipoMagia, "fire") == 0) {
            danoRecebido = 200;
            if (nivelMagia == 1)
                raioMagia = 20;
            else if (nivelMagia == 2)
                raioMagia = 30;
            else
                raioMagia = 50;
        } else if (strcmp(tipoMagia, "water") == 0) {
            danoRecebido = 300;
            if (nivelMagia == 1)
                raioMagia = 10;
            else if (nivelMagia == 2)
                raioMagia = 25;
            else
                raioMagia = 40;
        } else if (strcmp(tipoMagia, "earth") == 0) {
            danoRecebido = 400;
            if (nivelMagia == 1)
                raioMagia = 25;
            else if (nivelMagia == 2)
                raioMagia = 55;
            else
                raioMagia = 70;
        } else if (strcmp(tipoMagia, "air") == 0) {
            danoRecebido = 100;
            if (nivelMagia == 1)
                raioMagia = 18;
            else if (nivelMagia == 2)
                raioMagia = 38;
            else
                raioMagia = 60;
        }

        // Descobrindo o ponto do retângulo mais próximo do centro
        int pontoX = 0;
        int pontoY = 0;

        if (cx < x0)
            pontoX = x0;
        else if (cx > x0 + width)
            pontoX = x0 + width;
        else
            pontoX = cx;

        if (cy < y0)
            pontoY = y0;
        else if (cy > y0 + height)
            pontoY = y0 + height;
        else
            pontoY = cy;

        // Distância entre o centro da explosão e o ponto mais próximo
        int distanciaX = cx - pontoX;
        int distanciaY = cy - pontoY;

        int distanciaQuadrado = distanciaX * distanciaX + distanciaY * distanciaY;
        int raioQuadrado = raioMagia * raioMagia;

        // Verificando se o círculo intercepta o retângulo
        if (distanciaQuadrado <= raioQuadrado)
            printf("%d\n", danoRecebido);
        else
            printf("0\n");
    }

    return 0;
}
