/******************************************************************************
Dados três valores, verifique se os três podem formar um triângulo.
Em caso afirmativo, verifique se ele é escaleno, isóceles ou equilátero e se trata-se de um triângulo retângulo ou não.

Entrada
A entrada consiste em três números inteiros A,B e C (0 < A,B,C < 105).

Saída
A saída deve conter a string "Invalido" se os valores lidos não formarem um triângulo. 
Se os valores formarem um triângulo a saída deve ser "Valido-Equilatero", "Valido-Escaleno" ou "Valido-Isoceles" 
de acordo com a característica do triângulo seguido de "Retangulo: S" se o triângulo for retângulo ou "Retangulo: N" 
se não for, conforme os exemplos.

Exemplos de Entrada	Exemplos de Saída
4 6 2

                    Invalido

4 3 3

                    Valido-Isoceles
                    Retangulo: N

3 4 5

                    Valido-Escaleno
                    Retangulo: S
*******************************************************************************/
#include <stdio.h>

int main()
{
    //Variáveis
    int A = 0, B = 0, C = 0;
    
    //Entrada de Dados
    scanf("%d %d %d", &A, &B, &C);
    
    //Desenvolvimento de Dados
    if(A + B > C && B + C > A && C + A > B) { //primeira condição: É um triangulo válido?
    //qual tipo ele é?
        if(A == B && B == C) {
            printf("Valido-Equilatero\n");
            if(A*A == B*B + C*C || B*B == A*A + C*C || C*C == A*A + B*B) {
                printf("Retangulo: S\n");
            } else {
                printf("Retangulo: N\n");
            }
        } else if(A != B && B != C && A != C) {
            printf("Valido-Escaleno\n");
            if(A*A == B*B + C*C || B*B == A*A + C*C || C*C == A*A + B*B) {
                printf("Retangulo: S\n");
            } else {
                printf("Retangulo: N\n");
            }
        } else {
            printf("Valido-Isoceles\n");
            if(A*A == B*B + C*C || B*B == A*A + C*C || C*C == A*A + B*B) {
                printf("Retangulo: S\n");
            } else {
                printf("Retangulo: N\n");
            }
        }
    } else {
        printf("Invalido\n");
    }
    

    return 0;
}
