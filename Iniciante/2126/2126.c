/******************************************************************************
Dados dois números naturais N1 e N2, diz-se que N1 é subsequência contígua de N2 se todos os dígitos de N1 aparecem,
na mesma ordem e de forma contígua, em N2. Crie uma aplicação que leia dois números naturais e diga se o primeiro é uma subsequência contígua do segundo.

Entrada
A entrada é composta por vários casos de teste e termina com final de arquivo (EOF).
A primeira linha de cada entrada é composta por um valor natural N1(1 < N1 < 1010), a segunda linha é composta por um valor N2( N1 < N2 < 1032).

Saída
Para cada caso de teste imprima a quantidade de subsequências contíguas e a posição onde a subsequência é iniciada, 
caso exista mais de uma subsequência, imprima onde é iniciada a última subsequência.
Caso não exista subsequência, imprima "Nao existe subsequencia".
Mostre o resultado conforme o exemplo de saída.
*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char conjuntoDeNumeros[1010];
    char numerosAleatorios[1032];

    int contador = 1;

    while (scanf("%s", conjuntoDeNumeros) != EOF)
    {
        scanf("%s", numerosAleatorios);

        int quantidadeSub = 0;
        int posicao = 0;

        int tamanhoN1 = strlen(conjuntoDeNumeros);
        int tamanhoN2 = strlen(numerosAleatorios);

        for (int i = 0; i <= tamanhoN2 - tamanhoN1; i++)
        {
            int encontrou = 1;

            for (int j = 0; j < tamanhoN1; j++)
            {
                if (numerosAleatorios[i + j] != conjuntoDeNumeros[j])
                {
                    encontrou = 0;
                    break;
                }
            }

            if (encontrou)
            {
                quantidadeSub++;
                posicao = i + 1;
            }
        }

        printf("Caso #%d:\n", contador);

        if (quantidadeSub > 0)
        {
            printf("Qtd.Subsequencias: %d\n", quantidadeSub);
            printf("Pos: %d\n", posicao);
        }
        else
        {
            printf("Nao existe subsequencia\n");
        }

        printf("\n");

        contador++;
    }

    return 0;
}