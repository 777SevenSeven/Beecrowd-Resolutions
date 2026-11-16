
import sys

dados = list(map(int, sys.stdin.read().split()))
indice = 0

while indice < len(dados):
    n = dados[indice]
    indice += 1

    if n == 0:
        break

    presentes = dados[indice:indice + 2 * n]
    indice += 2 * n

    maior = float('-inf')
    menor = float('inf')

    for i in range(n):
        soma = presentes[i] + presentes[2 * n - 1 - i]

        if soma > maior:
            maior = soma

        if soma < menor:
            menor = soma

    print(maior, menor)
