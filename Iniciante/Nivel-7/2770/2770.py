# Beecrowd | 2770 - Tamanho da Placa
# Categoria: Iniciante | Nível 7 | Assunto: Desconhecido
# Link: https://judge.beecrowd.com/pt/problems/view/2770



import sys



dados = list(map(int, sys.stdin.read().split()))

indice = 0



while indice < len(dados):

    X = dados[indice]

    Y = dados[indice + 1]

    M = dados[indice + 2]

    indice += 3



    for _ in range(M):

        Xi = dados[indice]

        Yi = dados[indice + 1]

        indice += 2



        if (Xi <= X and Yi <= Y) or (Xi <= Y and Yi <= X):

            print("Sim")

        else:

            print("Nao")

