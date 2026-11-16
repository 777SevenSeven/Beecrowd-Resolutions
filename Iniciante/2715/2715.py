
import sys

entrada = list(map(int, sys.stdin.read().split()))
indice = 0

while indice < len(entrada):
    N = entrada[indice]
    indice += 1

    a = entrada[indice:indice + N]
    indice += N

    total = sum(a)
    soma_rangel = 0
    melhor = float('inf')

    for valor in a:
        soma_rangel += valor

        soma_gugu = total - soma_rangel
        diferenca = abs(soma_rangel - soma_gugu)

        if diferenca < melhor:
            melhor = diferenca

    print(melhor)
