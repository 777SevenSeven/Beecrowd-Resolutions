
using System;

class Program
{
    static void Main()
    {
        int casosTeste = int.Parse(Console.ReadLine());

        for (int i = 0; i < casosTeste; i++)
        {
            string[] entrada = Console.ReadLine().Split();

            int width = int.Parse(entrada[0]);
            int height = int.Parse(entrada[1]);
            int x0 = int.Parse(entrada[2]);
            int y0 = int.Parse(entrada[3]);

            entrada = Console.ReadLine().Split();

            string tipoMagia = entrada[0];
            int nivelMagia = int.Parse(entrada[1]);
            int cx = int.Parse(entrada[2]);
            int cy = int.Parse(entrada[3]);

            int raioMagia = 0;
            int danoRecebido = 0;

            // Descobrindo o dano e o raio da magia
            if (tipoMagia == "fire")
            {
                danoRecebido = 200;

                if (nivelMagia == 1)
                    raioMagia = 20;
                else if (nivelMagia == 2)
                    raioMagia = 30;
                else
                    raioMagia = 50;
            }
            else if (tipoMagia == "water")
            {
                danoRecebido = 300;

                if (nivelMagia == 1)
                    raioMagia = 10;
                else if (nivelMagia == 2)
                    raioMagia = 25;
                else
                    raioMagia = 40;
            }
            else if (tipoMagia == "earth")
            {
                danoRecebido = 400;

                if (nivelMagia == 1)
                    raioMagia = 25;
                else if (nivelMagia == 2)
                    raioMagia = 55;
                else
                    raioMagia = 70;
            }
            else if (tipoMagia == "air")
            {
                danoRecebido = 100;

                if (nivelMagia == 1)
                    raioMagia = 18;
                else if (nivelMagia == 2)
                    raioMagia = 38;
                else
                    raioMagia = 60;
            }

            // Encontrando o ponto do retângulo mais próximo do centro
            int pontoX;

            if (cx < x0)
                pontoX = x0;
            else if (cx > x0 + width)
                pontoX = x0 + width;
            else
                pontoX = cx;

            int pontoY;

            if (cy < y0)
                pontoY = y0;
            else if (cy > y0 + height)
                pontoY = y0 + height;
            else
                pontoY = cy;

            // Calculando a distância ao quadrado
            int distanciaX = cx - pontoX;
            int distanciaY = cy - pontoY;

            int distanciaQuadrado =
                distanciaX * distanciaX +
                distanciaY * distanciaY;

            int raioQuadrado = raioMagia * raioMagia;

            // Verificando a interseção entre o círculo e o retângulo
            if (distanciaQuadrado <= raioQuadrado)
                Console.WriteLine(danoRecebido);
            else
                Console.WriteLine(0);
        }
    }
}
