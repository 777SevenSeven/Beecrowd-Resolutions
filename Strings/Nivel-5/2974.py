# Beecrowd | 2974 - Fechadura
# Categoria: Strings | Nível 5
# Link: https://judge.beecrowd.com/pt/problems/view/2974

n = int(input())

palavras = [input() for _ in range(n)]



primeira = palavras[0]



for tamanho in range(len(primeira), 0, -1):

    for inicio in range(len(primeira) - tamanho + 1):

        trecho = primeira[inicio:inicio + tamanho]



        if all(trecho in palavra for palavra in palavras[1:]):

            print(trecho)

            exit()