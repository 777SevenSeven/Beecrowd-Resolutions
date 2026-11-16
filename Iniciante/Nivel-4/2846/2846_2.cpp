/*
 * Beecrowd | 2846 - Fibonot
 * Categoria: Iniciante | Nível 4 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/2846
 */

#include <stdio.h>



int main() {

    int K;

    scanf("%d", &K);



    // Gerar sequência de Fibonacci até limite

    long long fib[1000];

    int fsize = 0;



    long long a = 1, b = 1;

    fib[fsize++] = a;

    fib[fsize++] = b;



    while (b <= 200000) {

        long long c = a + b;

        fib[fsize++] = c;

        a = b;

        b = c;

    }



    int contador = 0;

    long long numero = 1;



    while (contador < K) {

        int ehFib = 0;

        for (int i = 0; i < fsize; i++) {

            if (fib[i] == numero) {

                ehFib = 1;

                break;

            }

        }



        if (!ehFib) {

            contador++;

        }



        if (contador == K) {

            printf("%lld\n", numero);

            break;

        }



        numero++;

    }



    return 0;

}

